#include<stdio.h>

int main()
{
       int n,i,j,found=0;
       char s[10001][6];
    
      scanf("%d",&n);

     for(i=1;i<=n;i++)
        {
           for(j=0;j<6;j++)
              {
                scanf("%c",&s[i][j]);
               }
        }

        for(i=1;i<=n;i++)
            {
                 for(j=0;j<6;j++)
                   {
                       if(s[i][1]=='O' && s[i][2]=='O')
                         {
                             found=1;
                              s[i][1]='+';
                              s[i][2]='+';
                              break;
                         }
                       else if(s[i][4]=='O' && s[i][5]=='O')   
                          {
                            found=1;
                            s[i][5]='+';
                            s[i][4]='+';
                            break;  
                          }
                    }
                if(found==1)
                break;
           }


    if(found==0)
       printf("NO\n");
   else
    {
       printf("YES\n");
  
     for(i=1;i<=n;i++)
       {
          for(j=0;j<=5;j++)
             {
                 printf("%c",s[i][j]);
              }
          printf("\n");
       }

    }























     








 return 0;
}
