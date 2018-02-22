#include<stdio.h>
void main()
{ int a;
 printf("Enter the number :");
 scanf("%d",&a);
if(a%2==0)
{ printf("\n  It is Even number: %d ",a);
}
else
{ printf("\n The nearest  even number is %d",a-1);
 }
}
