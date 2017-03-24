#include<stdio.h>

int main()
{
     int n,a[1000],b[1000],x[1000],i,big=0;
      scanf("%d",&n);
      x[0]=0;
 
     for(i=1;i<=n;i++)
       {
         scanf("%d %d",&a[i],&b[i]);
         x[i]=x[i-1]+b[i]-a[i];
       }
     
      for(i=1;i<=n;i++)
          {
             if(big<=x[i])
               {
                  big=x[i];
               }
          }
      
        printf("%d",big);

 return 0;
}
