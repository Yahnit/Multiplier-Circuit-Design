#include<stdio.h>

int main()

{
   int n,d[100],years=0,j,i,a,b;
   
   scanf("%d",&n);

   for(i=1;i<n;i++)
     {
       scanf("%d",&d[i]);
     }
    scanf("%d %d",&a,&b);

   for(j=a;j<b;j++)
     {
       years=years+d[j];
     }
    
    printf("%d",years);
    
   
 return 0;
}
