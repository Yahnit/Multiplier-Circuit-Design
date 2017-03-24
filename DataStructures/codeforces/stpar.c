#include<stdio.h>
#include<limits.h>

int main()
{

	int n,a[10000],i,x,stack[10000],flag=1,size=0,count=1,temp[10000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&x);
	temp[0]=0,stack[-1]=INT_MAX;
	for(i=1;i<=n;i++)
	{
		if(a[i]==count)
			temp[count++]=a[i];
		else if(a[i]<stack[size-1])
		{
			stack[size++]=a[i];

		}
		else if(a[i]>stack[size-1])
		{	
			while(a[i]>stack[size-1])
			{
				temp[count++]=stack[size-1];
				size--;
			}
           stack[size++]=a[i];
		}
	}
    while(size>=1)
	{
		temp[count++]=stack[size-1];
		size--;
	}

   for(i=1;i<=n;i++)
	   if(temp[i]!=i)
	   { flag=0;break;}


	if(flag==1)
		printf("yes\n");
	else
		printf("no\n");

	return 0;
}

