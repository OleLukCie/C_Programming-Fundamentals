/* table of squares and cubes
*   function protypes
John Coder
July 3, 2024
*/

#include <stdio.h>

double square(  double);
double cube(  double);


int main(void)
{
      int how_many = 0 ,i , j;
      printf("I want square and cube for 1 to n where n is :");

      scanf("%d", &how_many);
      printf("\n square and cubes by interval of .1\n");

      for (i = 1; i <= how_many; i++)
           for ( j = 0; j < 10; j++)
               printf("\n%lf\t %lf\t%lf",
                               i + j/10.0, square(i + j/10.0), cube(i + j/10.0));

      printf("\nDress normally.\n\n");
      return 0;
};

double square( double x)
{      return (x * x);}

double cube( double x)
{      return (x * x * x);}