#include<stdio.h>

int main()

{
    char s[100];
    int len,i,j,temp;

    scanf("%s",&s);
  
    for(i=0;s[i]!='\0';i++)
        {
           len++;
        }

       for(i=0;i<len;i+=2)
           {
              for(j=i+2;j<len;j+=2)
                 {
                    if(s[i]>=s[j])
                       {
                           temp=s[i];
                            s[i]=s[j];
                            s[j]=temp;
                        }
                  }
            }
         
          for(i=0;i<len;i++)
            {
              printf("%c",s[i]);
             }






 return 0;
}
