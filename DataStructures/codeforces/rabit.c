#include<stdio.h>

int main()
{
     int n,k,i,f,t,max,temp;
    scanf("%d%d",&n,&k);
    max=-1000000000;
   for(i=1;i<=n;i++)
        {
            scanf("%d%d",&f,&t);
              if(t>k)
                temp=f+k-t;
               else
                 temp=f;
              if(temp>max)
                max=temp;
                      
        }            

   printf("%d",max);




 return 0;
}
