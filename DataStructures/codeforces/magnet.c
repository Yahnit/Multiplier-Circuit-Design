#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);

int x[n];
int i;
int f=1;
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
for(i=0;i<n-1;i++)
{
if(x[i]!=x[i+1])
{
f=f+1;
}
}
printf("%d",f);
return 0;
}
