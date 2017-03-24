#include<stdio.h>  

 
int main()  
{  
    long long int k,a,b;  
    scanf("%lld%lld%lld",&k,&a,&b);
    {  
        long long int ans;  
        if(a>0&&b>0)  
        {  
            ans=(b/k)-(a-1)/k;  
        }  
        else if(a<0&&b<0)  
        {  
            ans=-1*(a/k)+(b+1)/k;  
        }  
        else  
        {  
            ans=-1*(a/k)+(b/k)+1;  
  
        }  
        printf("%lld\n",ans);  
    }  
    return 0;  
}  
