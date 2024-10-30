#include "ft_printf.h"
#include "libft.h"

void	ft_print_s2(t_data *tab, char *a, int p_null)
{
	char	*anew;
	int		i;

	if (tab->precision)
		anew = ft_substr(a, 0, tab->precision, p_null);
	else
	{
		anew = (char *)malloc(sizeof(char) * 1);
		anew[0] = '\0';
	}
	tab->space = tab->width - ft_strlen(anew);
	if (tab->width && !tab->dash)
		ft_print_spaces(tab->space);
	i = 0;
	while (anew[i])
		tab->tl += write(1, &anew[i++], 1);
	if (tab->width && tab->dash)
		ft_print_spaces(tab->space);
	if (tab->space > 0)
		tab->tl += tab->space;
	free(anew);
}

void	ft_had_to_split_this_mf(t_data *tab, char *a)
{
	int		i;

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
}

void	ft_print_s(t_data *tab)
{
	char	*a;
	int		p_null;

	p_null = 0;
	a = va_arg(tab->args, char *);
	if (!a)
	{
		a = ft_print_null(a);
		p_null = 1;
	}
	if (tab->pnt)
	{
		ft_print_s2(tab, a, p_null);
		return ;
	}
	ft_had_to_split_this_mf(tab, a);
	if (p_null)
		free(a);
}
