#include<stdio.h>
void main()
{
   int a,b,temp;
   printf("Enter the two numbers:");
   scanf("%d%d",&a,&b);
   a=a^b;
   b=a^b;
   a=a^b;
   printf("After swapping:%d\n%d",a,b);
}
