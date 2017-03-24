#include<stdio.h>

int main()
 {
       int n,d,i,b[2000],j,out=0;

 
       scanf("%d %d",&n,&d);
      for(i=1;i<=n;i++)
       {
         scanf("%d",&b[i]);
       }

     for(i=1;i<=n;i++)
        {
            if(b[i]>=b[i+1])
               {
                 for(j=1;b[i]>=b[i+1];j++)
                  {
                        b[i+1]=b[i+1]+d;
                         out++;
                  }
               }
                
          }  


printf("%d",out);


 return 0;
}
