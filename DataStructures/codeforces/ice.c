#include<stdio.h>

int main()
{
        int n,x,i,k,count=0;
        scanf("%d%d",&n,&x);
        char str[1];

        for(i=0;i<n;i++)
           {
                 scanf("%s",str);
                 scanf("%d",&k);
                if(str[0]=='+')
                  {
                         x+=k;
                  }
                else if(str[0]=='-')
                     {
                           x-=k;
                          if(x<0)
                         { count++;
                          x+=k;}
                     }
          }
           
           
     printf("%d %d",x,count);     

 return 0;
}
