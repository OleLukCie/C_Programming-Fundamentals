/* Use of Simple arrays
    John Coder          July  4, 2024
*/

#include <stdio.h>


int main(void)
{


     int grades[5]={78, 67, 92, 83, 88};
     double sum = 0.0;
     int i;

     printf("\n my grades are:\n");

     for (i = 0;  i < 5;  i++)
          printf("%d\t", grades[i]);

     printf("\n\n");

     for (i = 0;  i < 5;  i++)
          sum = sum + grades[i];

     printf("my average is %.2f\n\n", sum/5);

     return 0;
};