#include<stdio.h>

int main()

{
     int n,i,count=0;
     char str[50];

     scanf("%d",&n);
     scanf("%s",&str);
    
    for(i=0;i<(n-1);i++)
      {
        if(str[i]==str[i+1])
        count=count+1;
      }
      printf("%d",count);
 return 0;
}
