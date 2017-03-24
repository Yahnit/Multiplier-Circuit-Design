#include<stdio.h>

int main()
{
   int y,w,big;
   scanf("%d %d",&y,&w);

   if(y>w)
      {
        big=y;
      }
      else
        {
          big=w;
         }

     if(big==1)
      printf("1/1");
     else if(big==2)
      printf("5/6");
     else if(big==3)
      printf("2/3");
     else if(big==4)
     printf("1/2");
     else if(big==5)
     printf("1/3");
     else
     printf("1/6");



    





      




   

 return 0;
}
