#include<stdio.h>

int main()
{
    char st[101];
    int i,j,len=0,found=0,n;
  
   scanf("%d",&n);
   scanf("%s",&st);
 
   for(i=0;st[i]!='\0';i++)
       {
         len++;
       }
 
       for(i=65;i<91;i++)
          {
             for(j=0;j<len;j++)
                 {
                    if(st[j]==i || st[j]==i+32)
                         {
                            found++;
                            break;
                         }
                 }
           }
            
 if(found==26)
       {
           printf("YES");
       }
      else
       printf("NO"); 




 return 0;
}
