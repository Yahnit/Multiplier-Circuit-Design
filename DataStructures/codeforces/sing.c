#include<stdio.h>

int main()
{
        int n,d,i,t[101],sum=0;
        scanf("%d %d",&n,&d);
       
       for(i=1;i<=n;i++)
            {
              scanf("%d",&t[i]);
              sum=sum+t[i];
            }
   
    if(((n-1)*10+sum)>d)
         printf("-1");
 
  else
 {
   printf("%d",(d-sum)/5);
  }     



  
 return 0;
}
