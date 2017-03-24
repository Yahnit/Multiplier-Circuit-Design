#include<stdio.h>
int main()
{
       int n,a[1000],i,j,x=0,y=0,count[1000]={0},temp;
       scanf("%d",&n);
       for(i=1;i<=n;i++)
          {
              scanf("%d",&a[i]);
                 count[a[i]]++;
          }
        for(i=1;i<=1000;i++)
              {
                  for(j=1;j<=1000;j++)
                       {
                          if(count[i]>count[j])
                               {
                                   temp=count[i]; 
                                   count[i]=count[j];
                                   count[j]=temp;
                                }
                        }
               }                   
        printf("%d ",count[1000]);                
      for(i=1;i<=1000;i++)
           {
                if(count[i]!=0)
                  x++;
           }
        printf("%d",x);


 return 0;
}
