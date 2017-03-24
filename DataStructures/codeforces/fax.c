#include<stdio.h>
#include<string.h>

int ispalindrome( char x[],int a,int b)
      {
         int j;
         for(j=a;j<=b;j++)
              {
                   if(x[j]!=x[b])
                     return 0;
                     b--;
              } 
      return 1;
      }


int main()
{
         int k,i,len,temp,flag=0,count=0;
         char str[1000];
         scanf("%s",str);
        scanf("%d",&k);
       len=strlen(str);

       temp=len/k;
       if(len%k!=0)
           {
                printf("NO\n");
                return 0;
}
              
       
         for(i=0;i<=len-1;i+=temp)
            {
                  if(ispalindrome(str,i,i+temp-1)==1)
                      count++;
           }
          if(count==k)
            printf("YES\n");
          else
           printf("NO");


 return 0;
}
