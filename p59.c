#include <stdio.h>
int main() 
{
  int a[10], i,maximum;
  printf("Enter ten values:");
  for (i = 0; i < 10; i++) {
  scanf("%d", &a[i]);
}
  maximum = a[0];
  for (i = 0; i < 10; i++)
  {
   if (a[i] > maximum)
   {
    maximum = a[i];
    }
  }
    printf(" Greatest of ten numbers is %d", maximum);
    return 0;
  }
