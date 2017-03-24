#include<stdio.h>

int main()
{
   int a[8],i,j,x=0,y=0,count;

   for(i=1;i<=6;i++)
      {
        scanf("%d",&a[i]);
      }

   if(a[1]==a[2] && a[2]==a[3] && a[3]==a[4] && a[4]==a[5] && a[5]==a[6])
      {
        printf("Elephant");
      }
  

  else
    { 
       for(i=1;i<=6;i++)
          {
            count=0;
            for(j=1;j<=6;j++)
               {
                   if(a[i]==a[j])
                    count++;
                }
              if(count==5)
                {
                   x=1;
                   break;
                }
           }



     for(i=1;i<=6;i++)
          {
            count=0;
            for(j=1;j<=6;j++)
               {
                   if(a[i]==a[j])
                    count++;
                }
              if(count==4)
                {
                   x=1;
                   break;
                }
           }      

    for(i=1;i<=6;i++)
          {
            count=0;
            for(j=1;j<=6;j++)
               {
                   if(a[i]==a[j])
                    count++;
                }
              if(count==2)
                {
                   y=1;
                   break;
                }
           }

      if(x==1 && y==1)
      printf("Elephant");
 
     else if(x==1 && y==0)
      printf("Bear");
 
     else
     printf("Alien");
}
 











             
      













 return 0;
}
