#include<stdio.h>
int main()
{
     long long  int k,a,b,count=0,i,flag;

     scanf("%lld %lld %lld",&k,&a,&b);

    for(i=a;i<=b;i++)
         {
            if(i%k==0)
               { 
                   flag=i;
                    break;
               }
        }
                    
       for(i=flag;i<=b;i+=k)
            {
               count++;
            } 

        printf("%lld",count);




 return 0;
}
