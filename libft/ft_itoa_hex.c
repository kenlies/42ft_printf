#include "../include/libft.h"

int	ft_abs(int nb)
{
	if (nb < 0)
		nb = -nb;
	return (nb);
}

int	count_length(long nb)
{
	size_t	i;

	i = 0;
	while (nb)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}

char	*ft_itoa_hex(int nb)
{
	char	*str;
	char	*tab;
	int		size;

	size = 0;
	tab = "0123456789abcdef";
	size = count_length(nb);
	if (nb == 0)
		size++;
	str = (char *)malloc(sizeof(char) * size + 1);
	str[size] = '\0';
	while (size > 0)
	{
		str[size - 1] = tab[ft_abs(nb % 16)];
		size--;
		nb = nb / 16;
	}
	return (str);
}
