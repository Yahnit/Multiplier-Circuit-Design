#include<stdio.h>

int main()
{
    int n,a[101],b[101],i,x=0,y=0,z=0;
    scanf("%d",&n);

   for(i=1;i<=n;i++)
     {
        scanf("%d %d",&a[i],&b[i]);
     }

   for(i=1;i<=n;i++)
     {
        if(a[i]>b[i])
         { x++;}
        else if(b[i]>a[i])
       { y++;}
        else
       { z++;}
     } 
          
   if(x>y)
   printf("Mishka");

   else if(y>x)
   printf("Chris");

   else if (y==x)
   printf("Friendship is magic!^^");



 return 0;
}
