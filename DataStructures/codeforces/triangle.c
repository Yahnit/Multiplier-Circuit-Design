#include<stdio.h>
int main()
{
     int n,i,j,found=0;
     scanf("%d",&n);

    for(i=1;i<=n;i++)
           {
             if(i*(i+1)==2*n)
              found=1;  
           }
       if(found==1)
        printf("YES");
        else
       printf("NO");


 return 0;
}
