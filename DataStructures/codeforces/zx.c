#include<stdio.h>

int main()
{
      int a,b,n,x,y,i,found;
  
       scanf("%d %d %d",&a,&b,&n);
   
      while(n>0)
         {
            for(i=a;i>=1;i--)
               {
                 if(n%i==0 && a%i==0)
                  
                      {
                         i=x;
                         n=n-x;
                         a=a+x;
                         break;
                      } 
                 if(n<=0)
                    {
                       found=1;
                    }  break;                 
                  }
                }   

              for(i=b;i>=1;i--)
                {
                   if(n%i==0 && b%i==0)
                       {
                           i=y;
                           n=n-y; 
                           b=b+y;
                           break;
                       }
                      if(n<=0)
                          {
                             found=0;
                              break;
                           }
                }
                    

         

     printf("%d",found);






 return 0;
}
