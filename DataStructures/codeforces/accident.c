#include<stdio.h>

int main()
 {
      int n,i,j,count=0,a[100][100],k=1,ans[100];
        scanf("%d",&n);
          for(i=1;i<=n;i++)
               ans[i]=i;
          for(i=1;i<=n;i++)
             {
                 for(j=1;j<=n;j++)
                    {
                          scanf("%d",&a[i][j]);
                         if(a[i][j]==1)
                                      ans[i]=0;
                                 if(a[i][j]==2)
                                    ans[j]=0;
                                if(a[i][j]==3)
                                    {
                                          ans[i]=0;
                                          ans[j]=0;
                                    }

                    }
             }
       for(i=1;i<=n;i++)
             {
                  if(ans[i]!=0)
                    count++;
             }        
           printf("%d\n",count);
          for(i=1;i<=n;i++)
              {
                     if(ans[i]!=0)
                      printf("%d ",ans[i]);
              }
        



 return 0;
}
