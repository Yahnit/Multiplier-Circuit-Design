#include<stdio.h>

typedef struct Building
{
	long long int height,ind;
}buil;

buil a[100001],heap[100001];

void insert(buil heap[100001],long long int max,long long int z,long long int w)
{

	while (max>=1)
	{
		long long int parent=(max-1)>>1;
		if (z<=heap[parent].height)
		{
			heap[max].height= z;
			heap[max].ind= w;
			return;
		}
		heap[max] = heap[parent];
		max= parent;
	}
	heap[0].height=z;
	heap[0].ind=w;
}

long long int max_heap(buil heap[100001], long long int n, long long int i)

{

	long long int big=i,left=2*i+1,right=2*i+2;

	if (right<n && heap[right].height > heap[big].height)
		big=right;

	if (left<n && heap[left].height > heap[big].height)
		big=left;

	buil tp=heap[i];
	heap[i]=heap[big];
	heap[big]=tp;

	if(big!=i) max_heap(heap,n,big);

	return 0;

}

int main()
{
	long long int n,i,size=0;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
		scanf("%lld",&a[i].height),a[i].ind=i;

  for(i=1;i<n;i++)
  {
	  insert(heap,size,a[i].height,a[i].ind);
	  size++;
  }
    for(i=0;i<n-1;i++)
	{
       while(heap[0].ind<=i)
	   {
           heap[0]=heap[size-1];
		   size--;
		   max_heap(heap,size,0);

	   }
	   if(heap[0].height < a[i].height)
		   printf("0 ");
	   else
	   printf("%lld ",heap[0].height-a[i].height+1);
	}
	printf("0\n");

	return 0 ;
}

