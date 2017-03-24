#include<stdio.h>

int main()
{
     int x,y,k,m,a[100001],b[100001],i,j,g[100001],h[100001];

      scanf("%d %d %d %d",&x,&y,&k,&m);

    for(i=1;i<=x;i++)
        {
             scanf("%d",&a[i]);
        }


    for(i=1;i<=y;i++)
        {
             scanf("%d",&b[i]);
        }

      if(a[k]<b[y-m+1])
          printf("YES");
       else
         printf("NO");
 
      
 
 /*    for(i=1;i<=k;i++)
         {
             g[i]=a[i];
         }      

      for(i=y;i>=y-m+1;i--)
        {
           h[i]=b[i];
        }     
       
       if(g[k]<h[y-m+1])
          printf("YES");
       else
        printf("NO");
*/





 return 0;
}
