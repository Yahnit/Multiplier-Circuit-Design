#include<stdio.h>

int main()
{  
     int n,m,a,b,small,i,price;

     scanf("%d %d %d %d",&n,&m,&a,&b);

     small=n*a;
      for(i=1;n>=i*m;i++)
      {
	   if(small>= i*b+(n-i*m)*a)
	   {
		small=i*b+(n-i*m)*a;
	   }
      }
       price=small;
      if((n%m)!=0)
     { price=((n/m)+1)*b;}

    if(small<=price) 

     { printf("%d\n",small);}

      else 
      { printf("%d\n",price);}
     return 0;
}
