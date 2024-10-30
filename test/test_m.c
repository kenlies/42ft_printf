#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

#define BHCYN "\e[1;96m"
#define BHMAG "\e[1;95m"
#define BHRED "\e[1;91m"
#define reset "\e[0m"

int main() {

  	int len1;
  	int len2;

	printf(BHCYN "%%c: |OUTPUT| (PRINT_LEN)\n" reset);
	printf("--------------------------------\n");
	
	char c = 'a';
  	len1 = ft_printf("|%c|", c);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%c|", c);
  	printf(" (%d) rl\n", len2 - 2);

	c = 'A';
	printf("\n");

  	len1 = ft_printf("|%c|", c);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%c|", c);
  	printf(" (%d) rl\n", len2 - 2);

	c = '+';
	printf("\n");

  	len1 = ft_printf("|%c|", c);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%c|", c);
  	printf(" (%d) rl\n", len2 - 2);

	c = '-';
	printf("\n");

  	len1 = ft_printf("|%c|", c);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%c|", c);
  	printf(" (%d) rl\n", len2 - 2);

	c = ' ';
	printf("\n");

  	len1 = ft_printf("|%c|", c);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%c|", c);
  	printf(" (%d) rl\n", len2 - 2);

	c = '\0';
	printf("\n");

  	len1 = ft_printf("|%c|", c);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%c|", c);
  	printf(" (%d) rl\n", len2 - 2);

	c = '\n';
	printf("\n");

  	len1 = ft_printf("|%c|", c);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%c|", c);
  	printf(" (%d) rl\n", len2 - 2);

	c = '%';
	printf("\n");

  	len1 = ft_printf("|%c|", c);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%c|", c);
  	printf(" (%d) rl\n", len2 - 2);

	c = '/';
	printf("\n");

  	len1 = ft_printf("|%c|", c);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%c|", c);
  	printf(" (%d) rl\n", len2 - 2);

	c = '~';
	printf("\n");

  	len1 = ft_printf("|%c|", c);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%c|", c);
  	printf(" (%d) rl\n", len2 - 2);

	//-----------------------------------------------------------------------------------------------

	printf(BHCYN "\n%%s: |OUTPUT| (PRINT_LEN)\n" reset);
	printf("--------------------------------\n");
	
	char *str = "h";
  	len1 = ft_printf("|%s|", str);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%s|", str);
  	printf(" (%d) rl\n", len2 - 2);

	str = "hi";
	printf("\n");

  	len1 = ft_printf("|%s|", str);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%s|", str);
  	printf(" (%d) rl\n", len2 - 2);

	str = "hello there young novice!";
	printf("\n");

  	len1 = ft_printf("|%s|", str);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%s|", str);
  	printf(" (%d) rl\n", len2 - 2);

	str = "        hello  there    young novice!    ";
	printf("\n");

  	len1 = ft_printf("|%s|", str);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%s|", str);
  	printf(" (%d) rl\n", len2 - 2);

	str = "";
	printf("\n");

  	len1 = ft_printf("|%s|", str);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%s|", str);
  	printf(" (%d) rl\n", len2 - 2);

	str = "~!@#%^&*()_+%% <>?/}{[]\\|''";
	printf("\n");

  	len1 = ft_printf("|%s|", str);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%s|", str);
  	printf(" (%d) rl\n", len2 - 2);

	str = NULL;
	printf("\n");

  	len1 = ft_printf("|%s|", str);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%s|", str);
  	printf(" (%d) rl\n", len2 - 2);

	//-----------------------------------------------------------------------------------------------

  	printf(BHMAG "\n%%d: |OUTPUT| (PRINT_LEN)\n" reset);
	printf("--------------------------------\n");

	int i = 1;
  	len1 = ft_printf("|%d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	i = 0;
	printf("\n");

  	len1 = ft_printf("|%d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%d|", i);
  	printf(" (%d) rl\n", len2 - 2);

 	i = -1;
	printf("\n");

  	len1 = ft_printf("|%d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	i = 20;
	printf("\n");

  	len1 = ft_printf("|%d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	i = -21;
	printf("\n");

  	len1 = ft_printf("|%d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	i = 420;
	printf("\n");

  	len1 = ft_printf("|%d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	i = -420;
	printf("\n");

  	len1 = ft_printf("|%d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	i = 2147483647;
	printf("\n");

  	len1 = ft_printf("|%d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	i = -2147483648;
	printf("\n");

  	len1 = ft_printf("|%d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	//-----------------------------------------------------------------------------------------------

	printf(BHMAG "\n%%i: |OUTPUT| (PRINT_LEN)\n" reset);
	printf("--------------------------------\n");

	i = 1;
  	len1 = ft_printf("|%i|", i);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%i|", i);
  	printf(" (%i) rl\n", len2 - 2);

	i = 0;
	printf("\n");

  	len1 = ft_printf("|%i|", i);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%i|", i);
  	printf(" (%i) rl\n", len2 - 2);

 	i = -1;
	printf("\n");

  	len1 = ft_printf("|%i|", i);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%i|", i);
  	printf(" (%i) rl\n", len2 - 2);

	i = 20;
	printf("\n");

  	len1 = ft_printf("|%i|", i);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%i|", i);
  	printf(" (%i) rl\n", len2 - 2);

	i = -21;
	printf("\n");

  	len1 = ft_printf("|%i|", i);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%i|", i);
  	printf(" (%i) rl\n", len2 - 2);

	i = 420;
	printf("\n");

  	len1 = ft_printf("|%i|", i);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%i|", i);
  	printf(" (%i) rl\n", len2 - 2);

	i = -420;
	printf("\n");

  	len1 = ft_printf("|%i|", i);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%i|", i);
  	printf(" (%i) rl\n", len2 - 2);

	i = 2147483647;
	printf("\n");

  	len1 = ft_printf("|%i|", i);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%i|", i);
  	printf(" (%i) rl\n", len2 - 2);

	i = -2147483648;
	printf("\n");

  	len1 = ft_printf("|%i|", i);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%i|", i);
  	printf(" (%i) rl\n", len2 - 2);

	//-----------------------------------------------------------------------------------------------

	printf(BHMAG "\n%%p: |OUTPUT| (PRINT_LEN)\n" reset);
	printf("--------------------------------\n");

	int *p = &i;
	printf("\n");

  	len1 = ft_printf("|%p|", p);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%p|", p);
  	printf(" (%i) rl\n", len2 - 2);

	p = NULL;
	printf("\n");

  	len1 = ft_printf("|%p|", p);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%p|", p);
  	printf(" (%i) rl\n", len2 - 2);

	printf(BHMAG "\n%%u: |OUTPUT| (PRINT_LEN)\n" reset);
	printf("--------------------------------\n");

	unsigned int u = 0;

  	len1 = ft_printf("|%u|", u);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%u|", u);
  	printf(" (%i) rl\n", len2 - 2);

	u = 1;
	printf("\n");

	len1 = ft_printf("|%u|", u);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%u|", u);
  	printf(" (%i) rl\n", len2 - 2);

	u = 13;
	printf("\n");

	len1 = ft_printf("|%u|", u);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%u|", u);
  	printf(" (%i) rl\n", len2 - 2);

	u = 132;
	printf("\n");

	len1 = ft_printf("|%u|", u);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%u|", u);
  	printf(" (%i) rl\n", len2 - 2);

	u = 00000;
	printf("\n");

	len1 = ft_printf("|%u|", u);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%u|", u);
  	printf(" (%i) rl\n", len2 - 2);

	u = 4294967295;
	printf("\n");

	len1 = ft_printf("|%u|", u);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%u|", u);
  	printf(" (%i) rl\n", len2 - 2);

	//-----------------------------------------------------------------------------------------------

	printf(BHMAG "\n%%x: |OUTPUT| (PRINT_LEN)\n" reset);
	printf("--------------------------------\n");

	unsigned int x = 0;

  	len1 = ft_printf("|%x|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%x|", x);
  	printf(" (%i) rl\n", len2 - 2);

	x = 1;
	printf("\n");

	len1 = ft_printf("|%x|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%x|", x);
  	printf(" (%i) rl\n", len2 - 2);

	x = 10;
	printf("\n");

	len1 = ft_printf("|%x|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%x|", x);
  	printf(" (%i) rl\n", len2 - 2);

	x = 16;
	printf("\n");

	len1 = ft_printf("|%x|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%x|", x);
  	printf(" (%i) rl\n", len2 - 2);

	x = 429295;
	printf("\n");

	len1 = ft_printf("|%x|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%x|", x);
  	printf(" (%i) rl\n", len2 - 2);

	x = 4294967295;
	printf("\n");

	len1 = ft_printf("|%x|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%x|", x);
  	printf(" (%i) rl\n", len2 - 2);

//-----------------------------------------------------------------------------------------------

	printf(BHMAG "\n%%X: |OUTPUT| (PRINT_LEN)\n" reset);
	printf("--------------------------------\n");

	x = 0;

  	len1 = ft_printf("|%x|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%x|", x);
  	printf(" (%i) rl\n", len2 - 2);

	x = 1;
	printf("\n");

	len1 = ft_printf("|%X|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%X|", x);
  	printf(" (%i) rl\n", len2 - 2);

	x = 10;
	printf("\n");

	len1 = ft_printf("|%X|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%X|", x);
  	printf(" (%i) rl\n", len2 - 2);

	x = 16;
	printf("\n");

	len1 = ft_printf("|%X|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%X|", x);
  	printf(" (%i) rl\n", len2 - 2);

	x = 429295;
	printf("\n");

	len1 = ft_printf("|%X|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%X|", x);
  	printf(" (%i) rl\n", len2 - 2);

	x = 4294967295;
	printf("\n");

	len1 = ft_printf("|%X|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%X|", x);
  	printf(" (%i) rl\n", len2 - 2);

  	return 0;
}
