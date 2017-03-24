#include<stdio.h>

int main()
{
      int n,a[100001],b[100001],i,j,flag=0,temp;

    scanf("%d",&n);
   for(i=1;i<=n;i++)
         {
               scanf("%d%d",&a[i],&b[i]);
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
                                     temp=b[i];
                                    b[i]=b[j];
                                     b[j]=temp;
                                  }
                        }
              }

       for(i=1;i<n;i++)
          {
             if(b[i]>b[i+1])
                  {     
                       flag=1;
                        printf("Happy Alex");
                        break;
                  }
          }


        if(flag==0)
        printf("Poor Alex");







   




 

 return 0;
}
