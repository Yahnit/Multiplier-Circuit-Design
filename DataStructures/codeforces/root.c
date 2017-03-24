#include<stdio.h>

int main()

{
    float num,sqroot=0;
     
   printf("Enter any number:");
   scanf("%f",&num);
  
   while (sqroot*sqroot-num<=0)
     {
      sqroot=sqroot+0.000001;
     }

   printf("The square root of %f is %f",num,sqroot);
  

   return 0;
}
