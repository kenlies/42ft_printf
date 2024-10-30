#include "ft_printf.h"
#include "libft.h"

char	*ft_add_zeros(t_data *tab, char *a, char *anew)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_strlen(a);
	if (a[0] == '-' || a[0] == '+' || a[0] == ' ')
	{
		i++;
		j++;
		len--;
		tab->precision++;
	}
	while (i < tab->precision)
	{
		if (i < tab->precision - len)
			anew[i] = '0';
		else
			anew[i] = a[j++];
		i++;
	}
	anew[i] = '\0';
	return (anew);
}

char	*ft_malloc_for_zeros(t_data *tab, char *a)
{
	char	*anew;

	if (a[0] == '-' || a[0] == '+' || a[0] == ' ')
	{
		anew = (char *)malloc(sizeof(char) * tab->precision + 2);
		if (!anew)
			return (NULL);
		if (a[0] == '-')
			anew[0] = '-';
		else if (a[0] == '+')
			anew[0] = '+';
		else
			anew[0] = ' ';
	}
	else
	{
		anew = (char *)malloc(sizeof(char) * tab->precision + 1);
		if (!anew)
			return (NULL);
	}
	ft_add_zeros(tab, a, anew);
	free(a);
	return (anew);
}

char	*ft_add_zeros_flag(t_data *tab, char *a, char *anew)
{
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen(a);
	if (a[0] == '-' || a[0] == '+' || a[0] == ' ')
	{
		anew[0] = ft_choose_mps(a[0]);
		i++;
		j++;
		len--;
	}
	while (i < tab->width)
	{
		if (i < tab->width - len)
			anew[i] = '0';
		else
			anew[i] = a[j++];
		i++;
	}
	anew[i] = '\0';
	return (anew);
}

char	*ft_malloc_zero_flag(t_data *tab, char *a)
{
	char	*anew;

	anew = (char *)malloc(sizeof(char) * tab->width + 1);
	if (!anew)
		return (NULL);
	ft_add_zeros_flag(tab, a, anew);
	free(a);
	return (anew);
}

void	ft_print_d(t_data *tab)
{
	char	*a;
	int		i;

	a = ft_itoa(va_arg(tab->args, int));
	if (a[0] != '-' && (tab->plus || tab->space))
		a = ft_add_ps(tab, a);
	if (a[0] == '0' && tab->pnt && tab->precision == 0)
		a[0] = '\0';
	else if (tab->precision >= ft_strlen(a))
		a = ft_malloc_for_zeros(tab, a);
	else if (tab->zero && tab->width > ft_strlen(a) && !tab->dash && !tab->pnt)
		a = ft_malloc_zero_flag(tab, a);
	tab->space = tab->width - ft_strlen(a);
	if (tab->width && !tab->dash)
		ft_print_spaces(tab->space);
	i = 0;
	while (a[i])
		tab->tl += write(1, &a[i++], 1);
	if (tab->width && tab->dash)
		ft_print_spaces(tab->space);
	if (tab->space > 0)
		tab->tl += tab->space;
	free(a);
}
