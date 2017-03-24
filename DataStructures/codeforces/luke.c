#include<stdio.h>

int main()
{
      int d,l,v1,v2;
      float ans;
     scanf("%d%d%d%d",&d,&l,&v1,&v2);

     int temp=l-d;
     int vel=v1+v2;

    ans=(float)temp/(float)vel;
    printf("%8f",ans);
    


 
return 0;
}
