#include<stdio.h>

int main()

{
   char st[2];
   int i;

   scanf("%s",&st);


   if((st[0]=='a' && st[1]=='1') ||(st[0]=='a' && st[1]=='8')|| (st[0]=='h' && st[1]=='1') || (st[0]=='h' && st[1]=='8'))
       {
          printf("3");
        }



     else  if(st[0]=='a' || st[0]=='h' || st[1]=='1' || st[1]=='8')
        {
           printf("5");
        }

     else
       {
           printf("8");
       }
      



 return 0;
}
