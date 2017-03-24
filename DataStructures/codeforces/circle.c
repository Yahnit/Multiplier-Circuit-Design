#include<stdio.h>

int main()
{
     int n,i,d[100],s,t,a=0,b=0,temp;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {  scanf("%d",&d[i]);}
   scanf("%d%d",&s,&t);
       if(t<s)
          {
              temp=s;s=t;t=temp;
          }
 
   for(i=s;i<t;i++)
         {
              a+=d[i];
         }
  for(i=t;i<=n;i++)
       b+=d[i];

  for(i=1;i<s;i++)
      b+=d[i];
   if(a>b)
   printf("%d",b);
 else
 printf("%d",a);



 return 0;
}
