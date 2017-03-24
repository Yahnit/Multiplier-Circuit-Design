#include<stdio.h>

int main()
{
     int n,m,f[60],i,temp,min,j;

     scanf("%d %d",&n,&m);

    for(i=1;i<=m;i++)
      {
        scanf("%d",&f[i]);
      }


    for(i=1;i<=m;i++)
       {
          for(j=i+1;j<=m;j++)
            {
              if(f[i]>=f[j])
                  {
                        temp=f[i];
                        f[i]=f[j];
                        f[j]=temp;
                  }
            }
        }


    min=f[n]-f[1];

     for(i=1;i<=(m+1-n);i++)
          {
               if(min>(f[i+n-1]-f[i]))
                min=f[i+n-1]-f[i];
          }


   printf("%d",min);








         

 return 0;
}
