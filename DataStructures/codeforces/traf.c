#include<stdio.h>

int main()
{ 
      int x=0;
     float l,d,v,g,r,i;
     float t;
    scanf("%f %f %f %f %f",&l,&d,&v,&g,&r);

   t=d*(1/v);

   if(t<g)
    printf("%f",l*(1/v));

   else
       {
          for(i=1;i<=1000;i++)
            {
                if(t>=i*g+(i-1)*r && t<i*g+i*r)
                    { 
                      x=1;
                       printf("%f",l*(1/v)+(i*g+i*r)-t); 
                       break;
                     }
           }
            if(x==0)
            printf("%f",l*(1/v));
      }    
 

 return 0;
}
