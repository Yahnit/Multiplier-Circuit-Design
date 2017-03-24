#include<stdio.h>

int main()
{
    int i,j,a[5][5];
  
    for(i=1;i<=5;i++)
         {
            for(j=1;j<=5;j++)
              {
                 scanf("%d",&a[i][j]);
              }
                  
        }

       if(a[1][3]==1 || a[5][3]==1 || a[3][1]==1 || a[3][5]==1)
            {
               printf("2");
            }
        else if(a[2][2]==1 || a[4][2]==1 || a[4][4]==1 || a[2][4]==1)
            {
              printf("2");
             }
       else if(a[3][3]==1)
             {
               printf("0");
             }
       else if(a[1][1]==1 || a[5][5]==1 || a[5][1]==1 || a[1][5]==1)
            {
                printf("4");
             }
       else
               {
                  printf("3");
               }








 return 0;
}
