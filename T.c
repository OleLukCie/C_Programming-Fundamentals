/*  Fundamental Types INT
     John Coder
     July 2, 2024
*/

#include <stdio.h>

int main(void)
{
     short short_a = 5;
     int normal_a = 67;
     unsigned unsigned_a = 67u;
     long long_a = 67l;
     printf("short_a = %hd, divide by int 2 is %d\n", short_a, short_a/2);
     printf("short_a = %hd, divide by float 2 is %lf\n", short_a, short_a/2.0);
     printf("67 as a char is is %c\n", normal_a);
     printf("sizes in bytes of short, int,unsigned, and long on my machine:");
     printf("%lu , %lu, %lu, %lu\n", sizeof(short_a), sizeof(normal_a),
                         sizeof(unsigned_a), sizeof(long_a) );
     return 0;
}