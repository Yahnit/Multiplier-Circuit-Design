#include<stdio.h>

int main()

{
   int n,k,sum=0;
   scanf("%d",&n);
     
   for(k=1;sum<=n;k++)
        {
            sum=sum+(k*(k+1))/2;
         }
       printf("%d",k-2);
      

 return 0;
}
