#include<stdio.h>

int main()

{
    char a[100];
    int i,len,found=0;

    scanf("%s",&a);
    for(i=0;a[i]!=0;i++)
        {
           len++;
         }
 
        for(i=0;i<=(len-7);i++)
           {
              if((a[i]==a[i+1]) && (a[i]==a[i+2]) &&(a[i]==a[i+3]) && (a[i]==a[i+4]) && (a[i]==a[i+5]) && (a[i]==a[i+6]))
          {
            found=1;
          }
       
   }
       if(found==1)
        printf("YES");
       else
        printf("NO");
        


  return 0;
}
