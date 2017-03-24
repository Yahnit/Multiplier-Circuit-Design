#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,x[1000],y[1000],v[1000];
   int i,n;
  double t=10000000.0,temp;

     scanf("%d%d%d",&a,&b,&n);

 
    for(i=1;i<=n;i++)
       {
           scanf("%d%d%d",&x[i],&y[i],&v[i]);
         
          temp=(float)sqrt ((a-x[i])*(a-x[i])+(b-y[i])*(b-y[i]));  
       //   temp=(float)(abs(a-x[i])+abs(b-y[i]))/(float)v[i];
          if(temp<t)
            t=temp;
       }
     printf("%lf",t);  



 return 0;
}
