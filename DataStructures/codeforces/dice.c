#include<stdio.h>

int main()
{
   int a,b,k,win=0,los=0;
   scanf("%d %d",&a,&b);

   for(k=1;k<=6;k++)
     {
        if(k>=a && k>=b)
          {
             if((k-a)<(k-b))
              {
                 win++;
              }
             else if((k-a)>(k-b))
              {
                 los++;
              }
           }      
          
          
       else if(k>=a && k<=b)
         {
           if((k-a)<(b-k))
              {
                 win++;
              }
             else if((k-a)>(b-k))
              {
                 los++;
              }
          }
         
       else if(k<=a && k>=b)
          {
               if((a-k)<(k-b))
              {
                 win++;
              }
             else if((a-k)>(k-b))
              {
                 los++;
              }
          }
    
           else if(k<=a && k<=b)
          {
                if((a-k)<(b-k))
              {
                 win++;
              }
             else if((a-k)>(b-k))
              {
                 los++;
              }
          }
     }
 printf("%d %d %d",win,(6-win-los),los);    


 return 0;
}
