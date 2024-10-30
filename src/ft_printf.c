#include "ft_printf.h"
#include "libft.h"

void	doer(t_data *tab, const char *str, int i)
{
	if (str[i] == 'c')
		ft_print_c(tab);
	else if (str[i] == 's')
		ft_print_s(tab);
	else if (str[i] == 'd' || str[i] == 'i')
		ft_print_d(tab);
	else if (str[i] == 'u')
		ft_print_u(tab);
	else if (str[i] == 'p')
		ft_print_p(tab);
	else if (str[i] == 'x')
		ft_print_x(tab, 0);
	else if (str[i] == 'X')
		ft_print_x(tab, 1);
	else if (str[i] == '%')
		ft_print_pr(tab);
}

int	formatter(t_data *tab, const char *str, int i)
{
	while (not_type(str[i]))
	{
		if (tab->pnt && ft_isdigit(str[i]))
			tab->precision = (tab->precision * 10) + (str[i] - '0');
		else if (str[i] == '0' && tab->width == 0)
			tab->zero = 1;
		else if (ft_isdigit(str[i]))
			tab->width = (tab->width * 10) + (str[i] - '0');
		else if (str[i] == '.')
			tab->pnt = 1;
		else if (str[i] == '-')
			tab->dash = 1;
		else if (str[i] == '+')
			tab->plus = 1;
		else if (str[i] == ' ')
			tab->space = 1;
		else if (str[i] == '#')
			tab->hash = 1;
		i++;
	}
	doer(tab, str, i);
	return (i + 1);
}

int	printter(const char *str, t_data *tab)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i = formatter(tab, str, i + 1);
			len += tab->tl;
			initialise_tab(tab);
			continue ;
		}
		else
			len += write(1, &str[i], 1);
		i++;
	}
	free(tab);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	t_data	*tab;
	int		len;

	len = 0;
	if (str == NULL)
		return (0);
	tab = (t_data *)malloc(sizeof(t_data));
	if (!tab)
		return (-1);
	initialise_tab(tab);
	va_start(tab->args, str);
	len = printter(str, tab);
	va_end(tab->args);
	return (len);
}
