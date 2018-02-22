#include<stdio.h>
void main()
{
int n,m,o;
printf("Enter the number :");
scanf("%d\t%d",&n,&m);
o=n*m;
if(o%2==0)
{ printf("\n  It is Even number: %d ",o);
}
else
{ printf("\n It is odd number:%d",o);
 }
}
