#include <stdio.h>
#include<string.h>
void main()
  {  int i;
     char a[1000];
     printf("Enter the string:");
     scanf("%s",a);
     if(a[i]>='A'||a[i]<='Z'||a[i]>='a'||a[i]<='z'||a[i]>=0||a[i]<=9)
        {  printf("Yes");
             }
     else
         {  printf("No");
              }
}
