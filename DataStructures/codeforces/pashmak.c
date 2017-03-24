#include<stdio.h>

int main()
{
        long long int n,a[200001],i,big,small,x=1,y=1,t;

	 scanf("%lld",&n);
         scanf("%lld",&a[1]);
         big=a[1];
	 small=a[1];


	  for(i=2;i<=n;i++)
	      {
	           scanf("%lld",&a[i]);

                   if(a[i]>big)
                      {
		         big=a[i];
			 x=1;
	              }
                    else if(a[i]==big)
		    x++;
            
	           

                   if(a[i]<small)
                      {
		         small=a[i];
			 y=1;
	              }
                    else if(a[i]==small)
		    y++;
                  
	       }
               t=x*y;
            if(small==big)
             {
                 t=(n*(n-1))/2;
             }



          printf("%lld %lld",big-small,t);
          return 0;
}
