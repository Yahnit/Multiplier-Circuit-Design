#include<stdio.h>


int main()
{
   char s1[100],s2[100];
   int found=0,len=0,i;

   scanf("%s %s",&s1,&s2);

   for(i=0;s1[i]!='\0';i++)
       {
           len++;
       }
   
      for(i=0;i<len;i++)
        {
          if(s1[i]>=97 && s1[i]<=122)
              {
                s1[i]=s1[i]-32;
               }
          if(s2[i]>=97 && s2[i]<=122)
              {
                s2[i]=s2[i]-32;
               }
 
           if(s1[i]>s2[i])
              {
                 found=1;
                 break;
              }
           else if (s2[i]>s1[i])
               {
                  found=-1;
                  break;
               }
           }     

          printf("%d",found);
        









 return 0;
}
