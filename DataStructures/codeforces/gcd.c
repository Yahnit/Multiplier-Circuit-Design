#include<stdio.h>
#include<string.h>
int main()
{
      char a[101],b[101];
      scanf("%s",&a);
      scanf("%s",&b);
 
      if (strcmp(a,b)==0)
      printf("%s",a);
       else
      printf("1");
 
return 0;
}
