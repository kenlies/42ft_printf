NAME		= libftprintf.a
INCLUDE		= include
LIBFT		= libft
SRC_DIR		= src/
OBJ_DIR		= obj/
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -I
RM			= rm -f
AR			= ar rcs


SRC_FILES	=	ft_printf ft_print_x ft_print_u ft_print_p ft_print_s \
				ft_print_c ft_print_d ft_format_utils ft_print_utils 


SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

just_tag = tag

all:		$(NAME)

$(NAME):	$(OBJ)
			make -C $(LIBFT)
			cp libft/libft.a .
			mv libft.a $(NAME)
			$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(just_tag)

			$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(just_tag):
			mkdir -p $(OBJ_DIR)

bonus: all

clean:
			$(RM) -rf $(OBJ_DIR)
			make clean -C $(LIBFT)

fclean:		clean
			$(RM) -f $(NAME)
			$(RM) -f $(LIBFT)/libft.a

re:			fclean all


.PHONY:		all clean fclean re bonus $(just_tag)
