#include<stdio.h>

int main()

{
     char name[10000];
     int i,j,found,sum=0,len,n;

     scanf("%s",&name);
     for(i=0;name[i]!='\0';i++)
         {
            len++;
          }

        for(i=0;i<len;i++)
          {
             found=0;
               for(j=0;j<i;j++)
                 {
                    if(name[i]==name[j])
                      {
                         found=1;
                      }
                 }
               if(found==1)
                    {
                       sum++;
                    }
           }
        
           n=len-sum;
             if(n%2==0)
                {
                     printf("CHAT WITH HER!");
                 }
               else if(n%2==1) 
                 {
                     printf("IGNORE HIM!"); 
                  }    


          

 return 0;
}
