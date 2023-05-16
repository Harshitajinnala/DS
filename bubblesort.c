#include<stdio.h>
 void bubble_sort(int n,int *a)
 {
 	int i,j,temp;
 	for(i=0;i<n;i++)
    {
    	int swapcount=0;
        for(j=0;j<n-i-1;j++)
        {
           if(a[j]>a[j+1])
           {
               int temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
               swapcount++;
           }
        }
        if(swapcount==0)
        {
        	break;
		}
    }
}
 int main()
 {
 	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble_sort(n,a);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
 }
