#include <stdio.h>
int main()
{
   int a,b,c;
   printf("Enter two numbers a and b :");
   scanf("%d%d", &a, &b);
   c=a+b; //Addition of the given number is stored in variable 'c'
   printf("sum of two number is: %d" ,c);
   return 0;
}