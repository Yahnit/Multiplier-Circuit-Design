#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(n%7==0)
      {
         printf("%d %d",2*(n/7),2*(n/7));
      }

     else if(n%7==1)
       {
         printf("%d %d",2*(n/7),(2*(n/7)+1));
       }
      else if(n%7==6)
       {
          printf("%d %d",2*(n/7)+1,2*((n/7)+1));
       }
     
      else
         {
            printf("%d %d",2*(n/7),2*((n/7)+1));     
         }


 return 0;
}

