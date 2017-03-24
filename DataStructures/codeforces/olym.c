#include<stdio.h>

int main()
{
       int n,t[50001],i=1,j=1,k=1,p[50001],m[50001],s[50001],x,w;

        scanf("%d",&n);
 
     for(x=1;x<=n;x++)
        {
            scanf("%d",&t[x]);

            if(t[x]==1)
               {
                    p[i]=x;
                    i++;
               }
            if(t[x]==2)
               {
                    m[j]=x;
                    j++;
               }

           if(t[x]==3)
               {
                    s[k]=x;
                    k++;
               }
        }

     if(i<=j && i<=k)
        w=i-1;
     else if(j<=i && j<=k)
        w=j-1;
     else if(k<=j && k<=i)
        w=k-1;

     printf("%d\n",w);

   for(x=1;x<=w;x++)
      {
         printf("%d %d %d\n",p[x],m[x],s[x]);
      }




 return 0;
}
