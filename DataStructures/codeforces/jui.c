#include<stdio.h>

int main()
{
   int i;
   double n,p[100];
   scanf("%lf",&n);
   double x=0,y;
   
 

  for(i=1;i<=n;i++)
    {
       scanf("%lf",&p[i]);
       x=x+p[i];
    }
     
   y=x/n;    
 
      printf("%lf",y);    
     



 
 return 0;
}
