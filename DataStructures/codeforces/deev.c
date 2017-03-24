#include<stdio.h>
int main()
{
      long long int k,a,b,ans;
     scanf("%lld%lld%lld",&k,&a,&b);
       
        if(a+b==0 && b<=k)
           {
              printf("%lld",(b-a)/2);
           }
     else
  {
    ans=(b-a)/k+1;
     printf("%lld",ans);

 }


 return 0;
}
