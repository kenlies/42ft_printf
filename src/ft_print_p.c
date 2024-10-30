#include "ft_printf.h"
#include "libft.h"

char	*ft_zeros_p(t_data *tab, char *a)
{
	char	*anew;
	int		amount;
	int		i;
	int		j;

	amount = tab->precision - ft_strlen(a);
	anew = (char *)malloc(sizeof(char) * tab->precision + 1);
	if (!anew)
		return (NULL);
	i = 0;
	while (amount > 0)
	{
		anew[i++] = '0';
		amount--;
	}
	j = 0;
	while (a[j] != '\0')
		anew[i++] = a[j++];
	anew[i] = '\0';
	free(a);
	anew = ft_add_prefix(anew);
	return (anew);
}

char	*ft_zero_flag_p_add(t_data *tab, char *a)
{	
	char	*anew;
	int		amount;
	int		i;
	int		j;

	amount = tab->width - (ft_strlen(a) + 2);
	anew = (char *)malloc(sizeof(char) * tab->width - 1);
	if (!anew)
		return (NULL);
	i = 0;
	while (amount > 0)
	{
		anew[i++] = '0';
		amount--;
	}
	j = 0;
	while (a[j] != '\0')
		anew[i++] = a[j++];
	anew[i] = '\0';
	free(a);
	anew = ft_add_prefix(anew);
	return (anew);
}

char	*ft_zero_flag_p(t_data *tab, char *a)
{
	char	*anew;

	if ((tab->width > (int)ft_strlen(a) + 2) && !tab->dash)
		anew = ft_zero_flag_p_add(tab, a);
	else
		anew = ft_add_prefix(a);
	return (anew);
}

char	*ft_mega_iq_func(t_data *tab, char *a)
{
	if (tab->precision > ft_strlen(a))
		a = ft_zeros_p(tab, a);
	else if (tab->zero)
		a = ft_zero_flag_p(tab, a);
	else
		a = ft_add_prefix(a);
	return (a);
}

void	ft_print_p(t_data *tab)
{
	char	*a;
	int		i;

	a = ft_ulitoa_hex((unsigned long long)va_arg(tab->args, void *));
	a = ft_mega_iq_func(tab, a);
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
