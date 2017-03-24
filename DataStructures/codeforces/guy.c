#include<stdio.h>

int main()

{
      int n,a[101],b[101],p,q,i,y=0,k,j;

      scanf("%d",&n);
      scanf("%d",&p);
       for(i=1;i<=p;i++)
          {
            scanf("%d",&a[i]);
          }

      scanf("%d",&q);
          for(i=1;i<=q;i++)
           {
              scanf("%d",&b[i]);
           }
     
       a[p+1]=0;
       b[q+1]=0;
       for(i=1;i<=n;i++)
           {
              for(j=1,k=1;j<=p || k<=q;j++,k++)
                {
                    if(i==a[j] || i==b[k])
                       {
                           y++;
                            break;
                        }
                 }
            }                                    
  
       if(y==n)
        printf("I become the guy.");
       else
        printf("Oh, my keyboard!");









 return ;
}
