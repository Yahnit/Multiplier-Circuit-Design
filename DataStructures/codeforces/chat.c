#include<stdio.h>

int main()
{  
         char st[105];
         int i,len=0,x,f=0;

        scanf("%s",&st);

        for(i=0;st[i]!='\0';i++)
            {
                 len++;
            }
         for(i=0;i<len;i++)
              {
                 if(st[i]=='h')
                {
                  x=i;
                  f=1;
                  for(i=x+1;i<len;i++)
                      {
                        if(st[i]=='e')
                          {
                             x=i;
                              f=2;
                              for(i=x+1;i<len;i++)
              {
                  if(st[i]=='l')
                      {
                         x=i;
                         f=3;
                       for(i=x+1;i<len;i++)
              {
                  if(st[i]=='l')
                      {
                         x=i;
                         f=4;
                          for(i=x+1;i<len;i++)
              {
                  if(st[i]=='o')
                      {
                         x=i;
                         f=5;
                         
                      }
              }

                      }
              }
  
                      }
              }
  
                          }
 
            }
            }
          }


        if(f==5)
         printf("YES");
        else
        printf("NO");





             



 return 0;
}
