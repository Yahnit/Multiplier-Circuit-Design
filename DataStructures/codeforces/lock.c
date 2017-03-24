#include<stdio.h>

int main()
{
       int n,i,j,k,count=0;
       char a[1001],b[1001];

      scanf("%d",&n);
      scanf("%s",&a);
      scanf("%s",&b);

     for(i=0;i<n;i++)
        {
           if(a[i]>b[i])
               {
                   j=a[i]-b[i];
                   k=10+b[i]-a[i];
                      if(j<k)
                      count+=j;
                     else
                     count+=k;
               }
         
        else  if(a[i]<=b[i])
               {
                   j=b[i]-a[i];
                   k=10+a[i]-b[i];
                      if(j<k)
                      count+=j;
                     else
                     count+=k;
               }

              
        }

     printf("%d",count);

 return 0;
}
