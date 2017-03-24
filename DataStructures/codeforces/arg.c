#include<stdio.h>
int main()
{
         int n,i,count=0,t=1,car[100],ans[100];
         char str[100];
         scanf("%d",&n);
        scanf("%s",str);
        car[0]=0;
         for(i=0;i<n;i++)
              {  
                 ans[i]=((str[i]-'0')^t^car[i]);
                 car[i+1]=(str[i]-'0')*t+t*car[i]+car[i]*(str[i]-'0');
                 t=0;
               }
       /* for(i=0;i<n;i++)
            printf("%d",ans[i]);
          */ 
       for(i=0;i<n;i++)
            {
                 if(str[i]!=(ans[i]+48))
                  count++;
            }
          printf("%d",count); 


 
return 0;
}
