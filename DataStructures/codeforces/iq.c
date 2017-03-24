#include<stdio.h>

int main()

{
     int n,a[100],i,even=0,odd=0,found=0;
   
     scanf("%d",&n);

    for(i=0;i<n;i++)
         {
            scanf("%d",&a[i]);
         }

      if((a[0]%2==0 && a[1]%2==0 && a[2]%2==0) || (a[0]%2==1 && a[1]%2==0 && a[2]%2==0) || (a[0]%2==0 && a[1]%2==1 && a[2]%2==0) || (a[0]%2==0 && a[1]%2==0 && a[2]%2==1))
           even=1;
           else
            odd=1;

        if(even==1)
            {
                for(i=0;i<n;i++)
                   {
                      if(a[i]%2==1)
                        {
                            printf("%d",i+1);
                           break;
                        }
                    }
             }
               
        else  if(odd==1)
            {
                for(i=0;i<n;i++)
                   {
                      if(a[i]%2==0)
                        {
                           printf("%d",i+1);
                           break;
                        }
                    }
             }









 return 0;
}
