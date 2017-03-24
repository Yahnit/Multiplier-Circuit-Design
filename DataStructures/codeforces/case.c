#include<stdio.h>

int main()
{
       long long int n,c=0,b=0,i;
       char a[200001];
       scanf("%lld",&n);
       scanf("%s",a);
 
      for(i=0;i<n;i++)
        {
          if(a[i]=='0')
          c++;
          else if(a[i]=='1')
          b++;
         }



  if(c>b)
  printf("%lld",c-b);
 else if(b>=c)
 printf("%lld",b-c);

                      
                            





 return 0;
}
