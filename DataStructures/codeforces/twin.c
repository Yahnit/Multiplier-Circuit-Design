#include<stdio.h>

int main()

{
    int n,a[100],i,j,temp,x,sum1,sum2;
  
    scanf("%d",&n);
   
    for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
    
      for(i=1;i<=n;i++)
         {
            for(j=i+1;j<=n;j++)
                {
                    if(a[i]<=a[j])
                       {
                         temp=a[i];
                         a[i]=a[j];
                         a[j]=temp;
                       }
                  }
           }

       for(i=1;i<=n;i++)
          {
            sum1=0;
            sum2=0;
             for(j=1;j<=i;j++)
                  {
                     sum1=sum1+a[j]; 
                  }
              for(x=j;x<=n;x++)
                {
                   sum2=sum2+a[x];
                 }
               if(sum1>sum2)
                  {
                    printf("%d",i);
                    break;
                   }
              }
              







     
         



















 return 0;
}
