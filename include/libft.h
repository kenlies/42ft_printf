#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_toupper(int c);
int		ft_isdigit(int c);
int		ft_strlen(const char *str);
char	*ft_substr(char *s, int start, int len, int p_null);
char	*ft_itoa(int n);
char	*ft_itoa_hex(int nb);
char	*ft_uitoa(unsigned int nb);
char	*ft_ulitoa_hex(unsigned long long nb);

#endif
