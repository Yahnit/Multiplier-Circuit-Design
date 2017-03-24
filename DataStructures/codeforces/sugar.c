#include<stdio.h>

int main()
{
       int n,s,i,x,y,ans=0,flag=0;
      
         scanf("%d%d",&n,&s);
         
      for(i=1;i<=n;i++)
           {
               scanf("%d%d",&x,&y);
               if(x<s)
                 flag=1;
                 if(x==s && y==0)
                   flag=1;             
                if(x<s && y!=0 && ans<100-y)
                 {
                       ans=100-y;
                       flag=1;
                 }
                 
           }
          if(flag==0)
           printf("-1\n");
          else
           printf("%d\n",ans);
                 


 return 0;
}
