#include<stdio.h>

int main()
{
       int a,b,t,rev=0,d;
       scanf("%d%d",&a,&b);

       t=b;
         while(t>0)
            {
                 d=t%10;
                 rev=rev*10+d;
                 t=t/10;
            }
        printf("%d",rev+a);




 return 0;
}
