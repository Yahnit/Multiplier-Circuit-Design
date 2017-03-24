#include<stdio.h>

int main()
{
    int i,j,sumw=0,sumb=0;
    char s[8][8];

      for(i=1;i<=8;i++)
         {
            for(j=1;j<=8;j++)
              {
                   scanf("%s",&s[i][j]);
              }
         }


          for(i=1;i<=2;i++)
             {
                for(j=1;j<=8;j++)
                    {
                          if(s[i][j]>='A' && s[i][j]<='Z')
                             {
                               if(s[i][j]=='Q')
                                sumw=sumw+9;
                             else  if(s[i][j]=='R')
                                sumw=sumw+5;
                            else  if(s[i][j]=='B')
                                sumw=sumw+3;
                             else  if(s[i][j]=='N')
                                sumw=sumw+3;
                              else  if(s[i][j]=='P')
                                sumw=sumw+1;
                               else  if(s[i][j]=='K')
                                sumw=sumw+0;
                             }

                     else if(s[i][j]>='a' && s[i][j]<='z')
                             {
                               if(s[i][j]=='q')
                                sumb=sumb+9;
                             else  if(s[i][j]=='r')
                                sumb=sumb+5;
                            else  if(s[i][j]=='b')
                                sumb=sumb+3;
                             else  if(s[i][j]=='n')
                                sumb=sumb+3;
                              else  if(s[i][j]=='p')
                                sumb=sumb+1;
                               else  if(s[i][j]=='k')
                                sumb=sumb+0;
                             }

                        }

                   }


          for(i=7;i<=8;i++)
             {
                for(j=1;j<=8;j++)
                    {
                          if(s[i][j]>='A' && s[i][j]<='Z')
                             {
                               if(s[i][j]=='Q')
                                sumw=sumw+9;
                             else  if(s[i][j]=='R')
                                sumw=sumw+5;
                            else  if(s[i][j]=='B')
                                sumw=sumw+3;
                             else  if(s[i][j]=='N')
                                sumw=sumw+3;
                              else  if(s[i][j]=='P')
                                sumw=sumw+1;
                               else  if(s[i][j]=='K')
                                sumw=sumw+0;
                             }

                     else if(s[i][j]>='a' && s[i][j]<='z')
                             {
                               if(s[i][j]=='q')
                                sumb=sumb+9;
                             else  if(s[i][j]=='r')
                                sumb=sumb+5;
                            else  if(s[i][j]=='b')
                                sumb=sumb+3;
                             else  if(s[i][j]=='n')
                                sumb=sumb+3;
                              else  if(s[i][j]=='p')
                                sumb=sumb+1;
                               else  if(s[i][j]=='k')
                                sumb=sumb+0;
                             }

                        }

                    }

                    if(sumw>sumb)
                     printf("White");
                   else if(sumb>sumw)
                    printf("Black");
                    else
                    printf("Draw");                










   
   




 return 0;
}
