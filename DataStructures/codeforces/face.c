#include<stdio.h>

int main()
{
       int n,m,i,count=0,a[4],k,temp,j;
      scanf("%d%d",&n,&m);
       char str[50][50];
 
     for(i=0;i<n;i++)
            scanf("%s",str[i]);  
    
     for(i=0;i<n-1;i++)
            {
 
              for(k=0;k<m-1;k++)
               {
                
                        a[0]=0,a[1]=0,a[2]=0,a[3]=0;
                         if(str[i][k]=='f' || str[i+1][k]=='f' || str[i][k+1]=='f' || str[i+1][k+1]=='f')
                       a[0]++;
                          
                        if(str[i][k]=='a' || str[i+1][k]=='a' || str[i][k+1]=='a' || str[i+1][k+1]=='a')
                       a[1]++;
                          
                          if(str[i][k]=='c' || str[i+1][k]=='c' || str[i][k+1]=='c' || str[i+1][k+1]=='c')
                       a[2]++;
                          
                        if(str[i][k]=='e' || str[i+1][k]=='e' || str[i][k+1]=='e' || str[i+1][k+1]=='e')
                       a[3]++;
                          


 
                      if(a[0]>0 && a[1]>0 && a[2]>0 && a[3]>0)
                         count++;
                    
               }
          }
 printf("%d",count);
 return 0;
}
