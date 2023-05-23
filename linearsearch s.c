#include<stdio.h>
int linearsearch(int *a,int size,int se)
{
	int i;
	for(i=0;i<size;i++)
	{
		if (a[i]==se)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int i,n,a[100],se,res;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&se);
	res=linearsearch(a,n,se);
	printf("%d",res);
}
