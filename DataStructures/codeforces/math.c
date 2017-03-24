#include<stdio.h>

int main()
{
    char a[101],b[101];
    int i,len,x[101];
  
    scanf("%s %s",&a,&b);
   
   for(i=0;a[i]!='\0';i++)
     {
         len++;
     }

    for(i=0;i<len;i++)
        {
           if(a[i]==b[i])
           x[i]=0;
           else
           x[i]=1;
        }

      for(i=0;i<len;i++)
        {
          printf("%d",x[i]);
         }


   
    
   




 return 0;
}
