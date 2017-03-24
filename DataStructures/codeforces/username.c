#include<stdio.h>
int count=0;
int main()
{ 
    int n,a[1009],i,max[1009],min[1009];
	scanf("%d",&n);
int	mn=100000,mx=-1;
	for(i=0;i<n;i++)
       {
		   scanf("%d",&a[i]);
		   if(i!=0 && a[i]<min[i-1])
			   count++;
		   else if(i!=0 && a[i]>max[i-1])
			   count++;
          if(mx<=a[i])
			  mx=a[i],max[i]=mx;
		  else max[i]=max[i-1];
		  
          if(mn>=a[i])
			  mn=a[i],min[i]=mn;
		  else min[i]=min[i-1];
		  
       }
	printf("%d\n",count);
	return 0;
}
