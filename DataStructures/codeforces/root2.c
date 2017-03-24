#include<stdio.h>

int main()

{
   float num,sqroot,y;

   printf("Enter any number:");
   scanf("%f",&num);

  sqroot=num/2;
  
   while(sqroot*sqroot-num>0.0000001 || sqroot*sqroot-num<-0.0000001)
    {
      y=num/sqroot;
      sqroot=(sqroot+y)/2;
     }
    printf("The square root of %f is %f",num,sqroot);    
   
  return 0;
}
