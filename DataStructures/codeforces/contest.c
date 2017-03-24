#include<stdio.h>

int main()
{
        int n,a[2001],i,j;
      scanf("%d",&n);

      for(i=1;i<=n;i++)
          {
               scanf("%d",&a[i]);
          }

        for(i=1;i<=n;i++)
            {
               int count=0;
              for(j=1;j<=n;j++)
                  {
                     if(a[i]<a[j])
                        count++;
                  }
               printf("%d ",count+1);
            }





 return 0;
}
