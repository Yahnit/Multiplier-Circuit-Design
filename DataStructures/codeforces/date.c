#include<stdio.h>

int main()
{
    long long int a,b,s,i,j,x=0;
  
    scanf("%lld %lld %lld",&a,&b,&s);

    if((a<0) && (b<0))
      {
          a=-a; 
          b=-b;
      }
    else  if((a<0) && (b>=0))
      {
          a=-a;
          b=b;
      }


    else if((a>=0) && (b<0))
      {
          a=a;
          b=-b;
      }


    

    i=a+b;   

   if(i>s)
    printf("No");

   else
    {
         if(i%2==0)
           {
               if(s%2==0)
               printf("Yes");
               else
               printf("No");
            }

        else if(i%2==1)
             {
                  if(s%2==1)
                  printf("Yes");
                  else
                  printf("No");   
             }
  }








 return 0;
}
