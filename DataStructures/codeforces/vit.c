#include<stdio.h>

int main()
{
   char a[101],b[101],c[101];
  int i,j,len=0,x=1,y=1;

  scanf("%s %s",&a,&b);

 for(i=0;a[i]!='\0';i++)
   {
       len++;
   }

     for(i=0;i<len;i++)
        {
            if(a[i]!=b[i])
               { 
                  x=0;
                 break;               
               }
        }
 
     if(x==1)
     printf("No such string");


   else if(x==0)
     {
         for(i=0;i<len;i++)
           {
              if(b[i]==(a[i]+1))
                {
                     y=0;
                    break;
                }
           }
          
        if(y==0)
        printf("No such string");

        else
         {
          for(i=0;i<len;i++)
              {
                      c[i]=(a[i]+b[i])/2;
              }   
 
            for(i=0;i<len;i++)
                  {
                        printf("%c",c[i]);
                    }      
       }
    }
 






 return 0;
}
