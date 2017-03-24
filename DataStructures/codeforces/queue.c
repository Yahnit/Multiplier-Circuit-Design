#include<stdio.h>

int main()
{
          int n,i,a[100000],count,temp,j;
 
          scanf("%d",&n);

        for(i=1;i<=n;i++)
           {
                  scanf("%d",&a[i]);
           }
        
          for(i=1;i<=n;i++)
               {
                    for(j=1;j<=n;j++)
                        {
                             if(a[i]<a[j])
                                  {
                                        temp=a[j];
                                        a[j]=a[i];
                                        a[i]=temp;
                                   }
                       }
             }

            for(i=1;i<=n;i++)
                {
                    int sum=0;
                      for(j=1;j<i;j++)
                         sum+=a[j];
                    if(sum<=a[i])
                        count++;
                      else
                          {
                              temp=a[i];a[i]=a[i+1];a[i+1]=temp;
                                i--; 
                           }
                             
                 }
             printf("%d",count);
                     


 
 return 0;
}
