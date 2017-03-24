#include<stdio.h>

int main()
{
    int n,i;
    char st[10];

   scanf("%d",&n);
   scanf("%s",&st);

          if(n==6)
        printf("espeon");
       else if(n==8)
         printf("vaporeon");
 
        else
            {
               if(st[0]=='u' || st[1]=='m' || st[2]=='b')
                   printf("umbreon");
            else if(st[0]=='l' || st[1]=='e'|| st[3]=='f')
                printf("leafeon");
           else if(st[0]=='g' || st[3]=='c')
                printf("glaceon");
          else if(st[0]=='j' || st[1]=='0' || st[3]=='t')
                printf("jolteon");
           else if(st[0]=='s' || st[1]=='y' || st[3]=='v')
                printf("sylveon");
         else
          printf("flareon");
       }




      





 return 0;
}

