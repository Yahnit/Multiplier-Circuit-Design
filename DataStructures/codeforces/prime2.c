#include<stdio.h>

int main()

{
    int n,i=1,nof=0;
   
    printf("Enter any number:");
    scanf("%d",&n);

   while(i<=n)
     {
        if(n%i==0)
          { 
            nof++; 
           }
          i++;
     }

    if(nof==2)
        printf("%d is a prime number\n",n);
     else
         printf("%d is not a prime number\n",n);     

 
 return 0;
}
