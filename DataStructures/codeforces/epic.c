#include<stdio.h>

int main()
 {
    int a,b,n,i,j,found;
    scanf("%d %d %d",&a,&b,&n);
   
   while(n>0)
      {
         for(i=a;i>=1;i--)
            {
                if((n%i==0) && (a%i==0))
                   {
                       
                       n=n-i;
                      found=0;
                       break;
                    }
            }
    
          if(n>0)
           {
              for(j=b;j>=1;j--)
                {
                if((n%j==0) && (b%j==0))
                   {
                       n=n-j;
                      found=1;
                       break;
                    }
                }
            }
        }
 

      printf("%d",found);
    





  return 0;
 }
