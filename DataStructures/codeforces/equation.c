#include<stdio.h>
#include<math.h>
int main() 
{
    long long int a, b, c,delta;
    double sqroot,i,j;
    scanf("%lld%lld%lld",&a,&b,&c);
    
    
    if(a==0&&b==0&&c==0) 
    printf("-1\n");
    else if(a==0) 
    {
      printf("1\n%lf\n", -c*1.0/b);
    }
    else if(a==0&&b==0) 
    {
      printf("0\n");
    }
    
    else 
    {
       delta = b*b-4*a*c;
      if(delta>0) 
      {
        sqroot = sqrt(b*b*1.0-4*a*c);
        i = (-b-sqroot)/(2*a); 
        j = (-b+sqroot)/(2*a);
        if(i < j) 
        printf("2\n%lf\n%lf\n", i, j);
        else 
        printf("2\n%lf\n%lf\n",j, i);
      }
      else if(delta==0) 
      {
        printf("1\n%lf\n", -b/2.0/a);
      }
      else 
      {
      printf("0\n");
      }
    }
  
  return 0;
}
