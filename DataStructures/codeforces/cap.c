#include<stdio.h>

int main()
{
   char s[1000];
   int i,len=0;

   scanf("%s",&s);

   for(i=0;s[i]!='\0';i++)
       {
          len++;
       }

  if(s[0]>=97 && s[0]<=122)
       {
         s[0]=s[0]-32;
       }
   
      for(i=0;i<len;i++)
        {
           printf("%c",s[i]);
        }

 return 0;
}
