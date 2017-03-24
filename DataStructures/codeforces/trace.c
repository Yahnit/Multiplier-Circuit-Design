#include<stdio.h>
int main()
{
    int n,a[101],i,j,temp;
    double ans=0;
    scanf("%d",&n);
 for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
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

      a[0]=0;

     for(i=n;i>=1;i-=2)
         {
           ans=ans+a[i]*a[i]-a[i-1]*a[i-1];
         }
        
       printf("%lf",3.1415926*ans);
     

 return 0;
}
