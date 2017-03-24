#include<stdio.h>

int main()
{
    int len,i,j,found=1;
    char a[101],b[101];

    scanf("%s %s",&a,&b);
  
   for(i=0,len=0;a[i]!='\0';i++)
         {
           len++;
         }
       len--;

      for(i=0,j=len;i<len,j>=0;i++,j--)
         {
           if(a[i]!=b[j])
           found=0;
          }
       if(found==1)
        printf("YES");
       else
        printf("NO");        


 return 0;
}
