#include<stdio.h>

int main()
{
     int a[100],n,i,len,j;
     char b[100];
 
    scanf("%d",&n);
   
   for(i=0;i<n;i++)
     {
        scanf("%s",&b);
         len=0;
        for(j=0;b[j]!='\0';j++)
           {
             len++;
           }
          if(len<=10)
              {
                printf("%s",b);
              }
             else
              {
                 printf("%c%d%c",b[0],len-2,b[len-1]);
              }
    printf("\n");
   }
           
return 0;
}
