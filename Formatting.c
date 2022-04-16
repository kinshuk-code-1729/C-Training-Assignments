// Formatted input and output
#include<stdio.h>
int main()
{
 printf("pi equals %f\n", 3.14159);
 printf("%.2f\n", 3.14159);
 printf("%10.2f\n", 3.14159);
 printf("%.10f\n", 3.14159);
 printf("%.9s\n", "halfofthestring");
 printf("%d %d %f %s\n", 123, 123, 123, "test");
 printf("Over %.2f%% of statistics are made up.\n", 55.719);
 printf("%1.00f\n", 3.1);
 printf("%*d",5,7);
}