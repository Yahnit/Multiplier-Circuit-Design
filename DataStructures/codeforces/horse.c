#include<stdio.h>

int main()
 {
     long long int s[4],i,j,x=0;

     for(i=1;i<=4;i++)
       {
           scanf("%lld",&s[i]);
       }
    

    for(i=1;i<=4;i++)
         {
            for(j=1;j<i;j++)
               {
                   if(s[i]==s[j])
                      {
                           x++;
                           break;
                      }
               }
           }   
 
        printf("%lld",x);  

    
 return 0;
}
