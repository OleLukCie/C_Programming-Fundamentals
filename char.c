/*  Char in C
 *   A Fundamental Type
 *   John Coder
 *   July.  2,  2024
*/

#include <stdio.h>

int main(void)
{
     char c = 'a';
      printf("c in ASCII is %d\n", c);
      printf("c   the character %c\n", c);
      printf("Three consecutive chars are : %c%c%c \n", c, c+1, c+2);
      printf("Three bell rings chars are : %c%c%c \n", '\a', '\a', '\a');
      return 0;
}