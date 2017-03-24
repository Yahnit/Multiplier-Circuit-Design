#include<stdio.h>

int main()
{
   int n,k,l,c,d,p,nl,np,small,a,b,e;

   scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);

  a=c*d;
  b=(k*l)/(nl);
  e=p/np;

  if(a<=b && a<=e)
    small=a;
else if(b<=a && b<=e)
   small=b;
else if(e<=b && e<=a)
   small=e;

printf("%d",small/n);











 return 0;
}
