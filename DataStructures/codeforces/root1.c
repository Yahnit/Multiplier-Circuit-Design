#include<stdio.h>

int main()

{
   double num, sqroot=0;
    printf("Enter any number:");
    scanf("%lf",&num);
   
    while(sqroot*sqroot-num<=0) 
   
    {
      sqroot=sqroot+50.0;
    }
   
   while(sqroot*sqroot-num>=0)
  
   {
     sqroot--;
   }
  
  while(sqroot*sqroot-num<=0)
 
  {
     sqroot=sqroot+0.00001;
  } 



    printf("The square root of %lf is %lf",num,sqroot);
 
  return 0;
}
