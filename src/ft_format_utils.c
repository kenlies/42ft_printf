#include "ft_printf.h"
#include "libft.h"

t_data	*initialise_tab(t_data *tab)
{
	tab->width = 0;
	tab->pnt = 0;
	tab->precision = 0;
	tab->zero = 0;
	tab->dash = 0;
	tab->tl = 0;
	tab->plus = 0;
	tab->percent = 0;
	tab->space = 0;
	tab->hash = 0;
	return (tab);
}

char	ft_choose_mps(char c)
{
	if (c == '-')
		return ('-');
	else if (c == '+')
		return ('+');
	else
		return (' ');
	return (0);
}

int	not_type(char c)
{
	char	*types;
	int		i;

	i = 0;
	types = "csdiupxX%";
	while (types[i] != '\0')
		if (types[i++] == c)
			return (0);
	return (1);
}

char	*ft_add_prefix(char	*a)
{
	char	*anew;
	int		i;
	int		j;

	anew = (char *)malloc(sizeof(char) * ft_strlen(a) + 3);
	if (!anew)
		return (NULL);
	anew[0] = '0';
	anew[1] = 'x';
	j = 2;
	i = 0;
	while (a[i] != '\0')
	{
		anew[j] = a[i];
		i++;
		j++;
	}
	anew[j] = '\0';
	free(a);
	return (anew);
}
