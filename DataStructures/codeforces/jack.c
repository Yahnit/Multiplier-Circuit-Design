#include<stdio.h>

int main()
{
     int n,x,ans;
  
     scanf("%d",&n);
  
    x=n-10;

    if(n<=0)
       {
         ans=0;
       }
     

    else if(x>=1 && x<=9 || x==11)
           {
                ans=4;
            }
     else if(x==10)
       {
         ans=15;
       }
      
      else 
        {
          ans=0;
        }

    printf("%d",ans);  








 return 0;
}
