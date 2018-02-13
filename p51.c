#include<stdio.h>
int main()
{ int a,b,c,d,e;
  printf("Enter the number");
  scanf("%d",&a);
  b=a/100;
  c=a%100;
  d=c%10;
  e=c/10;
printf("Digits..:\t%d\t%d\t%d",b,e,d);
return 0;
}
