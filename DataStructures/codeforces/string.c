#include<stdio.h>

int main()
{
    char a[100];
    int i,len=0;

     scanf("%s",&a);
     
    for(i=0;a[i]!='\0';i++)
        {
           len++;
         }
  
    for(i=0;i<len;i++)
        {
           if(a[i]!='a' && a[i]!='A' && a[i]!='e' && a[i]!='E' && a[i]!='i' && a[i]!='I' && a[i]!='o' && a[i]!='O' && a[i]!='u' && a[i]!='U'&& a[i]!='y' && a[i]!='Y')
          {
             if(a[i]>=65 && a[i]<=90)
               {
                  printf(".%c",a[i]+32);
                }
               else if(a[i]>=97 && a[i]<=122) 
                {
                   printf(".%c",a[i]);
                }
           }
       }



 

  return 0;
}
