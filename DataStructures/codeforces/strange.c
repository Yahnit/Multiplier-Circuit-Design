#include<stdio.h>

int main()
{
        int n,t,i,j,k,x;
        scanf("%d %d",&n,&t);
   
         char st[n];
         scanf("%s",&st);
        st[n]='\0';

       for(i=0;i<n;i++)
         {
             if(st[i]=='.')
              x=i;
         }
 
         x++;

       for(i=1;i<=t;i++)
           {
                  for(j=x;st[j]>=5 && j<n;j++)
                    {
                         st[j-1]+=1;
                         for(k=j;k<n;k++)
                            {
                                st[k]=' ';
                            }
                       n=j;
                       break;
                    }
            }

         printf("%s",st);







                    

















            
              
      




 return 0;
}
