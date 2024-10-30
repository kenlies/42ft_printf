#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

typedef struct s_data
{
	va_list	args;
	int		width;
	int		pnt;
	int		precision;
	int		zero;
	int		dash;
	int		tl;
	int		plus;
	int		percent;
	int		space;
	int		hash;
}	t_data;

int		ft_printf(const char *str, ...);
int		printter(const char *str, t_data *tab);
int		formatter(t_data *tab, const char *str, int i);
void	doer(t_data *tab, const char *str, int i);

void	ft_print_c(t_data *tab);
void	ft_print_s(t_data *tab);
void	ft_print_d(t_data *tab);
void	ft_print_p(t_data *tab);
void	ft_print_u(t_data *tab);
void	ft_print_x(t_data *tab, int upper_yes);

t_data	*initialise_tab(t_data *tab);
char	ft_choose_mps(char c);
int		not_type(char c);
void	ft_print_pr(t_data *tab);
void	ft_print_spaces(int nb);
char	*ft_add_prefix(char	*a);
char	*ft_add_ps(t_data *tab, char *a);
char	*ft_fuck_this_stupid_rule(t_data *tab, char *anew, char *a);
char	*ft_print_null(char *a);

void	ft_print_s2(t_data *tab, char *a, int p_null);
char	*ft_malloc_zero_flag(t_data *tab, char *a);
char	*ft_add_zeros_flag(t_data *tab, char *a, char *anew);
char	*ft_malloc_for_zeros(t_data *tab, char *a);
char	*ft_add_zeros(t_data *tab, char *a, char *anew);
char	*ft_mega_iq_func(t_data *tab, char *a);
char	*ft_zero_flag_p(t_data *tab, char *a);
char	*ft_zero_flag_p_add(t_data *tab, char *a);
char	*ft_zeros_p(t_data *tab, char *a);
char	*ft_to_upper_x(char	*a);

#endif