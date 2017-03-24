#include<stdio.h>

int main()
{
    int a,b,x,y;
    scanf("%d %d",&a,&b);
  
    if(a<b)
      x=a;
     else 
     x=b;
  
   if(a>b)
      {
          y=(a-b)/2;
       }
     else
       {
         y=(b-a)/2;
       }

   printf("%d %d",x,y);  
  

    

 return 0;
}
