#include<stdio.h>

int main()
{
     int n,sum=1,i;
     scanf("%d",&n);

   for(i=1;i<n;i++)
       {
            sum=sum+i;
           if(sum<=n)
            printf("%d ",sum);
          else
            {
              sum=sum-n;
             printf("%d ",sum);
            }
        }
                  



 return 0;
}
