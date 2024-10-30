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
  	len1 = ft_printf("|%5c|", c);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%5c|", c);
  	printf(" (%d) rl\n", len2 - 2);

	c = 'A';
	printf("\n");

  	len1 = ft_printf("|%-5c|", c);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%-5c|", c);
  	printf(" (%d) rl\n", len2 - 2);

	c = '+';
	printf("\n");

  	len1 = ft_printf("|%1c|", c);
  	printf(" (%1d) ft\n", len1 - 2);
	len2 = printf("|%1c|", c);
  	printf(" (%d) rl\n", len2 - 2);

	c = '-';
	printf("\n");

  	len1 = ft_printf("|%-1c|", c);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%-1c|", c);
  	printf(" (%d) rl\n", len2 - 2);

	c = ' ';
	printf("\n");

  	len1 = ft_printf("|%15c|", c);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%15c|", c);
  	printf(" (%d) rl\n", len2 - 2);

	c = '\0';
	printf("\n");

  	len1 = ft_printf("|%3c|", c);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%3c|", c);
  	printf(" (%d) rl\n", len2 - 2);

	c = '\n';
	printf("\n");

  	len1 = ft_printf("|%-1c|", c);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%-1c|", c);
  	printf(" (%d) rl\n", len2 - 2);

	c = '%';
	printf("\n");

  	len1 = ft_printf("|%-7c|", c);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%-7c|", c);
  	printf(" (%d) rl\n", len2 - 2);

	c = '/';
	printf("\n");

  	len1 = ft_printf("|%2c|", c);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%2c|", c);
  	printf(" (%d) rl\n", len2 - 2);

	c = '~';
	printf("\n");

  	len1 = ft_printf("|%1c|", c);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%1c|", c);
  	printf(" (%d) rl\n", len2 - 2);

	//-----------------------------------------------------------------------------------------------

	printf(BHCYN "\n%%s: |OUTPUT| (PRINT_LEN)\n" reset);
	printf("--------------------------------\n");
	
	char *str = "h";
  	len1 = ft_printf("|%5.1s|", str);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%5.1s|", str);
  	printf(" (%d) rl\n", len2 - 2);

	str = "hi";
	printf("\n");

  	len1 = ft_printf("|%3.s|", str);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%3.s|", str);
  	printf(" (%d) rl\n", len2 - 2);

	str = "hello there young novice!";
	printf("\n");

  	len1 = ft_printf("|%-25.5s|", str);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%-25.5s|", str);
  	printf(" (%d) rl\n", len2 - 2);

	str = "        hello  there    young novice!    ";
	printf("\n");

  	len1 = ft_printf("|%1.1s|", str);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%1.1s|", str);
  	printf(" (%d) rl\n", len2 - 2);

	str = "hello there young novice!";
	printf("\n");

  	len1 = ft_printf("|%-25.5s|", str);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%-25.5s|", str);
  	printf(" (%d) rl\n", len2 - 2);

	str = "21-school.ru";
	printf("\n");

  	len1 = ft_printf("|%1.s|", str);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%1.s|", str);
  	printf(" (%d) rl\n", len2 - 2);

	str = "~!@#%^&*()_+%% <>?/}{[]\\|''";
	printf("\n");

  	len1 = ft_printf("|%-1.5s|", str);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%-1.5s|", str);
  	printf(" (%d) rl\n", len2 - 2);

	str = NULL;
	printf("\n");

  	len1 = ft_printf("|%8s|", str);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%8s|", str);
  	printf(" (%d) rl\n", len2 - 2);

	printf("\n");

  	len1 = ft_printf("|%-5s|", str);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%-5s|", str);
  	printf(" (%d) rl\n", len2 - 2);

	printf("\n");

  	len1 = ft_printf("|%-5.1s|", str);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%-5.1s|", str);
  	printf(" (%d) rl\n", len2 - 2);

	printf("\n");

  	len1 = ft_printf("|%.s|", str);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%.s|", str);
  	printf(" (%d) rl\n", len2 - 2);

	//-----------------------------------------------------------------------------------------------

  	printf(BHMAG "\n%%d: |OUTPUT| (PRINT_LEN)\n" reset);
	printf("--------------------------------\n");

	int i = 1;
  	len1 = ft_printf("|%1.1d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%1.1d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	printf("\n");

  	len1 = ft_printf("|%05d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%05d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	printf("\n");

  	len1 = ft_printf("|%-5.d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%-5.0d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	printf("\n");

  	len1 = ft_printf("|% -5.8d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|% -5.8d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	i = 0;
	printf("\n");

  	len1 = ft_printf("|%.d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%.d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	printf("\n");

  	len1 = ft_printf("|%+02d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%+02d|", i);
  	printf(" (%d) rl\n", len2 - 2);

 	i = -1;
	printf("\n");

  	len1 = ft_printf("|%+2.5d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%+2.5d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	printf("\n");

  	len1 = ft_printf("|% 2.1d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|% 2.1d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	i = 20;
	printf("\n");

  	len1 = ft_printf("|%+5.4d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%+5.4d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	i = -21;
	printf("\n");

  	len1 = ft_printf("|%05.d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%05.d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	i = 420;
	printf("\n");

  	len1 = ft_printf("|%-.2d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%-.2d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	i = -420;
	printf("\n");

  	len1 = ft_printf("|%0d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%0d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	i = 2147483647;
	printf("\n");

  	len1 = ft_printf("|%+.3d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%+.3d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	i = -2147483648;
	printf("\n");

  	len1 = ft_printf("|%-30d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%-30d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	//-----------------------------------------------------------------------------------------------

	printf(BHMAG "\n%%i: |OUTPUT| (PRINT_LEN)\n" reset);
	printf("--------------------------------\n");

	i = 1;
  	len1 = ft_printf("|%1.1d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%1.1d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	printf("\n");

  	len1 = ft_printf("|%05d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%05d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	printf("\n");

  	len1 = ft_printf("|%-5.d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%-5.0d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	printf("\n");

  	len1 = ft_printf("|% -5.8d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|% -5.8d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	i = 0;
	printf("\n");

  	len1 = ft_printf("|%.d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%.d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	printf("\n");

  	len1 = ft_printf("|%+02d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%+02d|", i);
  	printf(" (%d) rl\n", len2 - 2);

 	i = -1;
	printf("\n");

  	len1 = ft_printf("|%+2.5d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%+2.5d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	printf("\n");

  	len1 = ft_printf("|% 2.1d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|% 2.1d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	i = 20;
	printf("\n");

  	len1 = ft_printf("|%+5.4d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%+5.4d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	i = -21;
	printf("\n");

  	len1 = ft_printf("|%05.d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%05.d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	i = 420;
	printf("\n");

  	len1 = ft_printf("|%-.2d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%-.2d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	i = -420;
	printf("\n");

  	len1 = ft_printf("|%0d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%0d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	i = 2147483647;
	printf("\n");

  	len1 = ft_printf("|%+.3d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%+.3d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	i = -2147483648;
	printf("\n");

  	len1 = ft_printf("|%-30d|", i);
  	printf(" (%d) ft\n", len1 - 2);
	len2 = printf("|%-30d|", i);
  	printf(" (%d) rl\n", len2 - 2);

	//-----------------------------------------------------------------------------------------------

	printf(BHMAG "\n%%p: |OUTPUT| (PRINT_LEN)\n" reset);
	printf("--------------------------------\n");

	int *p = &i;
	printf("\n");

  	len1 = ft_printf("|%-25p|", p);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%-25p|", p);
  	printf(" (%i) rl\n", len2 - 2);

	printf("\n");

  	len1 = ft_printf("|%5p|", p);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%5p|", p);
  	printf(" (%i) rl\n", len2 - 2);

	printf("\n");

  	len1 = ft_printf("|%12p|", p);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%12p|", p);
  	printf(" (%i) rl\n", len2 - 2);

	p = NULL;
	printf("\n");

  	len1 = ft_printf("|%1p|", p);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%1p|", p);
  	printf(" (%i) rl\n", len2 - 2);

	printf("\n");

  	len1 = ft_printf("|%-5p|", p);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%-5p|", p);
  	printf(" (%i) rl\n", len2 - 2);

	printf(BHMAG "\n%%u: |OUTPUT| (PRINT_LEN)\n" reset);
	printf("--------------------------------\n");

	unsigned int u = 0;

  	len1 = ft_printf("|%.u|", u);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%.u|", u);
  	printf(" (%i) rl\n", len2 - 2);

	printf("\n");

	len1 = ft_printf("|%02u|", u);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%02u|", u);
  	printf(" (%i) rl\n", len2 - 2);

	u = 1;
	printf("\n");

	len1 = ft_printf("|%.u|", u);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%.u|", u);
  	printf(" (%i) rl\n", len2 - 2);

	u = 13;
	printf("\n");

	len1 = ft_printf("|%-.5u|", u);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%-.5u|", u);
  	printf(" (%i) rl\n", len2 - 2);

	u = 132;
	printf("\n");

	len1 = ft_printf("|%.25u|", u);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%.25u|", u);
  	printf(" (%i) rl\n", len2 - 2);

	u = 00000;
	printf("\n");

	len1 = ft_printf("|%1u|", u);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%1u|", u);
  	printf(" (%i) rl\n", len2 - 2);

	u = 4294967295;
	printf("\n");

	len1 = ft_printf("|%.10u|", u);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%.10u|", u);
  	printf(" (%i) rl\n", len2 - 2);

	u = 42000;
	printf("\n");

	len1 = ft_printf("|%042.2u|", u);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%042.2u|", u);
  	printf(" (%i) rl\n", len2 - 2);

	//-----------------------------------------------------------------------------------------------

	printf(BHMAG "\n%%x: |OUTPUT| (PRINT_LEN)\n" reset);
	printf("--------------------------------\n");

	unsigned int x = 0;

  	len1 = ft_printf("|%#x|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%#x|", x);
  	printf(" (%i) rl\n", len2 - 2);

	printf("\n");

	len1 = ft_printf("|%#4.x|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%#4.x|", x);
  	printf(" (%i) rl\n", len2 - 2);

	printf("\n");

	len1 = ft_printf("|%#.x|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%#.x|", x);
  	printf(" (%i) rl\n", len2 - 2);

	printf("\n");

	len1 = ft_printf("|%.x|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%.x|", x);
  	printf(" (%i) rl\n", len2 - 2);

	x = 1;
	printf("\n");

	len1 = ft_printf("|%#.1x|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%#.1x|", x);
  	printf(" (%i) rl\n", len2 - 2);

	printf("\n");

	len1 = ft_printf("|%#-7.2x|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%#-7.2x|", x);
  	printf(" (%i) rl\n", len2 - 2);

	printf("\n");

	len1 = ft_printf("|%#07x|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%#07x|", x);
  	printf(" (%i) rl\n", len2 - 2);

	printf("\n");

	len1 = ft_printf("|%07x|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%07x|", x);
  	printf(" (%i) rl\n", len2 - 2);

	printf("\n");

	len1 = ft_printf("|%#.x|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%#.x|", x);
  	printf(" (%i) rl\n", len2 - 2);

	x = 10;
	printf("\n");

	len1 = ft_printf("|%-#1x|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%-#1x|", x);
  	printf(" (%i) rl\n", len2 - 2);

	x = 16;
	printf("\n");

	len1 = ft_printf("|%06x|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%06x|", x);
  	printf(" (%i) rl\n", len2 - 2);

	x = 429295;
	printf("\n");

	len1 = ft_printf("|%0#16x|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%0#16x|", x);
  	printf(" (%i) rl\n", len2 - 2);

	x = 4294967295;
	printf("\n");

	len1 = ft_printf("|%.10x|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%.10x|", x);
  	printf(" (%i) rl\n", len2 - 2);

//-----------------------------------------------------------------------------------------------

	printf(BHMAG "\n%%X: |OUTPUT| (PRINT_LEN)\n" reset);
	printf("--------------------------------\n");

	x = 0;

  	len1 = ft_printf("|%#X|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%#X|", x);
  	printf(" (%i) rl\n", len2 - 2);

	printf("\n");

	len1 = ft_printf("|%#4.X|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%#4.X|", x);
  	printf(" (%i) rl\n", len2 - 2);

	printf("\n");

	len1 = ft_printf("|%#.X|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%#.X|", x);
  	printf(" (%i) rl\n", len2 - 2);

	printf("\n");

	len1 = ft_printf("|%.X|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%.X|", x);
  	printf(" (%i) rl\n", len2 - 2);

	x = -1;

  	len1 = ft_printf("| %#X |", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("| %#X |", x);
  	printf(" (%i) rl\n", len2 - 2);

	x = 1;
	printf("\n");

	len1 = ft_printf("|%#.1X|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%#.1X|", x);
  	printf(" (%i) rl\n", len2 - 2);

	printf("\n");

	len1 = ft_printf("|%#-7.2X|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%#-7.2X|", x);
  	printf(" (%i) rl\n", len2 - 2);

	printf("\n");

	len1 = ft_printf("|%#07X|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%#07X|", x);
  	printf(" (%i) rl\n", len2 - 2);

	printf("\n");

	len1 = ft_printf("|%07X|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%07X|", x);
  	printf(" (%i) rl\n", len2 - 2);

	printf("\n");

	len1 = ft_printf("|%#.X|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%#.X|", x);
  	printf(" (%i) rl\n", len2 - 2);

	x = 10;
	printf("\n");

	len1 = ft_printf("|%-#1X|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%-#1X|", x);
  	printf(" (%i) rl\n", len2 - 2);

	x = 16;
	printf("\n");

	len1 = ft_printf("|%06X|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%06X|", x);
  	printf(" (%i) rl\n", len2 - 2);

	x = 429295;
	printf("\n");

	len1 = ft_printf("|%0#16X|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%0#16X|", x);
  	printf(" (%i) rl\n", len2 - 2);

	x = 4294967295;
	printf("\n");

	len1 = ft_printf("|%.10X|", x);
  	printf(" (%i) ft\n", len1 - 2);
	len2 = printf("|%.10X|", x);
  	printf(" (%i) rl\n", len2 - 2);

  	return 0;
}