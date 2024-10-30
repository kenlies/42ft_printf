#include "../include/libft.h"

static int	ft_ulen(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_uitoa(unsigned int nb)
{
	char	*str;
	int		len;
	int		nb2;

	nb2 = nb;
	len = ft_ulen(nb);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (nb > 0)
	{
		str[len - 1] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	if (nb2 == 0)
		str[0] = '0';
	return (str);
}
