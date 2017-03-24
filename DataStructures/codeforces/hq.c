#include<stdio.h>

int main()

{
  char a[100];
  int i,len,found=0;

  scanf("%s",&a);

  for(i=0;a[i]!='\0';i++)
   {
       len++;
   }

    for(i=0;i<len;i++)
      {
          if(a[i]=='H' || a[i]=='Q' || a[i]==9 || a[i]=='+')
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
