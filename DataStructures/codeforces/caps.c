#include<stdio.h>

int main()
{
    char st[101];
     int x=1,i,len=0;

    scanf("%s",&st);

   for(i=0;st[i]!='\0';i++)
       {
          len++;
       }
        
      for(i=1;i<len;i++)
          {
            if(st[i]>=97 && st[i]<=122)
            x=0;
           }

        if(x==1)
            { 
               if(st[0]>=65 && st[0]<=90)
                  {
                     st[0]=st[0]+32;
                    
                   for(i=1;i<len;i++)
                         {
                              st[i]=st[i]+32;
                         }
                    }
          else if (st[0]>=97 && st[0]<=122)
                  {
                     st[0]=st[0]-32;

                   for(i=1;i<len;i++)
                         {
                              st[i]=st[i]+32;
                         }
                    }

            }






                   
      for(i=0;i<len;i++)
          {
             printf("%c",st[i]);
         }









     


  

 return 0;
}
