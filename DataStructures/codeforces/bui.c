#include<stdio.h>

int main()
{
   int k,a[15],i,temp,j,sum=0,x=0;
   scanf("%d",&k);
 
    for(i=1;i<=12;i++)
        {
         scanf("%d",&a[i]);
        }

        for(i=1;i<=12;i++)
           {
              for(j=i+1;j<=12;j++)
                   {
                      if(a[i]<=a[j])
                           {
                               temp=a[i]; 
                               a[i]=a[j];
                               a[j]=temp;
                           }
                  }
             }
  
       for(i=1;i<=12;i++)
          {
               x=x+a[i];
          }
        if(x<k)
           {
            printf("-1");
            
           }
       else if(x>=k)
          {
 
             for(i=1;i<=12 && sum<k;i++)
           {
               sum=sum+a[i];
           }   
         
        printf("%d",i-1);
       } 



 return 0;
}
