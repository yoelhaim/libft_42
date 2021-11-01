#include <stdio.h>
#include <ctype.h>
#include <string.h>
//#include "ft_isdigit.c"
#include "isalnum.c"
#include "isascii.c"
#include "isprint.c"
#include "strlen.c"
#include "toupper.c"
#include "tolower.c"
#include "atoi.c"
#include "strchr.c"
#include "strrchr.c"
int main(int ac, char **av)
{

	//printf("%c", ft_tolower('$'));
//	printf("%d", ft_atoi(av[1]));
  printf("%s", ft_strrchr(av[1], 'a'));
//	printf("%d", ft_isprint(127));



}
