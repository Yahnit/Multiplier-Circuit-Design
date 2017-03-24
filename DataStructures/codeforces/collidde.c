#include<stdio.h>

int main()
{
         int n,a[200000],i,temp,ans=500000000,flag=0;;
         char c[200000];

        scanf("%d",&n);
       scanf("%s",c);
      for(i=0;i<n;i++)
       scanf("%d",&a[i]);  
      
         for(i=0;i<n-1;i++)
             {
                if(c[i]=='R' && c[i+1]=='L')
                 {
                    temp=(a[i+1]-a[i])/2;
                    if(temp<=ans)
                    ans=temp;
                    flag=1;
                 }  
            }
          if(flag==0)
            printf("-1\n");
           else
           printf("%d",ans);


 return 0;
}
