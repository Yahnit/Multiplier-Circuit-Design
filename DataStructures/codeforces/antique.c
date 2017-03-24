#include<stdio.h>
int main()
{
    int n,v,k[50],s[50][50],i,j;
    int count=0,ans[50]={0},p=1;

      scanf("%d%d",&n,&v);

     for(i=1;i<=n;i++)
        {
           scanf("%d",&k[i]);
             for(j=1;j<=k[i];j++)
                {
                     scanf("%d",&s[i][j]);
                }
            for(j=1;j<=k[i];j++)
                  {
                      if(s[i][j]<v)
                        {
                              count++;
                              ans[p]=i;
                              p++;
                               break;
                        }
                  } 
        }
       printf("%d\n",count);
       for(i=1;i<p;i++)
            {
               printf("%d ",ans[i]);
             }

return 0;
}    

