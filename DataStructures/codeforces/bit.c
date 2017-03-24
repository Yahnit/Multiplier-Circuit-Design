#include<stdio.h>

int main()

{
   int n,i,out=0;
   char a[5];

    scanf("%d",&n);
   for(i=0;i<n;i++)
        {
           scanf("%s",&a);
           if(a[0]=='+' || a[1]=='+')
              {
                out++;
               }
             else
               {
                  out--;
                }
          }
          printf("%d",out);  

 return 0;
}
