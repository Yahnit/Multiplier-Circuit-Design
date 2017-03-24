#include<stdio.h>

int main()
{
       long long int n,l,a[1001],i,j,first=0,last=0,temp;
       scanf("%lld %lld",&n,&l);
       double ans;      
  
      for(i=i;i<=n;i++)
          {
             scanf("%lld",&a[i]);
          }
      for(i=1;i<=n;i++)
         {
            if(a[i]==0)
            first=1;
            else if(a[i]==l)
            last=1;
        }



       for(i=1;i<=n;i++)
          {
            for(j=i+1;j<=n;j++)
              {
                   if(a[i]>a[j])
                      {
                           temp=a[i];
                           a[i]=a[j];
                           a[j]=temp;
                      }
              }
          }

       if(first==1 && last==1)
          {
              ans=(a[2]-a[1])/2;
               
               for(i=1;i<=n;i++)
                 {
                     if(((a[i+1]-a[i])/2)>ans)
                               {
                                  ans=(a[i+1]-a[i])/2;
                               }
                           
                 }
               printf("%lf",ans);
          }








                                



































 return 0;
}
