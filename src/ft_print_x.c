#include "ft_printf.h"
#include "libft.h"

char	*ft_to_upper_x(char	*a)
{
	int		i;
	char	*anew;

	anew = (char *)malloc(sizeof(char) * ft_strlen(a) + 1);
	i = 0;
	while (a[i] != '\0')
	{
		anew[i] = ft_toupper(a[i]);
		i++;
	}
	anew[i] = '\0';
	free(a);
	return (anew);
}

void	ft_print_x(t_data *tab, int upper_yes)
{
	char	*a;
	int		i;

	a = ft_ulitoa_hex(va_arg(tab->args, unsigned int));
	if (a[0] == '0' && tab->pnt && tab->precision == 0)
		a[0] = '\0';
	else if (tab->hash && a[0] != '0')
		a = ft_mega_iq_func(tab, a);
	else if (tab->precision >= ft_strlen(a))
		a = ft_malloc_for_zeros(tab, a);
	else if (tab->zero && tab->width > ft_strlen(a) && !tab->dash && !tab->pnt)
		a = ft_malloc_zero_flag(tab, a);
	if (upper_yes)
		a = ft_to_upper_x(a);
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
