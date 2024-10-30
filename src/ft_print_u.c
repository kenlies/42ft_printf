#include "ft_printf.h"
#include "libft.h"

void	ft_print_u(t_data *tab)
{
	char	*a;
	int		i;

	a = ft_uitoa(va_arg(tab->args, unsigned int));
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
