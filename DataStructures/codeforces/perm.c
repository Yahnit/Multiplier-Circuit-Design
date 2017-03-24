#include<stdio.h>

int main()
{
        int n,i;
        scanf("%d",&n);

       if(n%2==1)
         printf("-1\n");
       else
         {
           for(i=2;i<=n;i+=2)
               {
                  printf("%d %d ",i,i-1);
               }
         }


 return 0;
}
