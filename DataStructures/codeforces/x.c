#include<stdio.h>

int main()
{
     int n,i,flag=1,j;
     scanf("%d",&n);
     char st[300][300];
    for(i=0;i<n;i++)
       {
           scanf("%s",st[i]);
        }
      for(i=0;i<n;i++)
          {
                 for(j=0;j<n;j++)
                     {
                          if(i==j || (i+j)==n-1)
                             {
                                 if(st[i][j]!=st[0][0])
                                      {
                                            flag=0;
                                             break;
                                       }
                              }
                            if(i!=j && (i+j)!=n-1)
                              {
                                  if(st[i][j]==st[0][0])
                                      {
                                            flag=0;
                                             break;
                                       }
                                  if(st[i][j]!=st[0][1])
                                        {
                                           flag=0;
                                           break;
                                         }
                               }
                            

                       }
           }

   if(flag==0)
         printf("NO");
     else
       printf("YES");

return 0;
}
