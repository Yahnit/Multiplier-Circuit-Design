#include<stdio.h>

int main()
{ 
 int n,a[100],i,x,y;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
  {
     scanf("%d",&a[i]);
      if(a[i]==1)
       x=i;
      else if(a[i]==n)
        y=i;
  }


          if(y<x)
              {
                  if((n-y)>(x-1))
                      printf("%d",n-y);
                   else
                      printf("%d",x-1);
              }
     else  if(y>x)
              {
                  if((n-x)>(y-1))
                      printf("%d",n-x);
                   else
                      printf("%d",y-1);
              }
return 0;
}
                 

                 

