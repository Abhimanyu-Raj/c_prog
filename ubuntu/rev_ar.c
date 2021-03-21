#include<stdio.h>
int main()
{
	int size;
	printf("enter size\n");
	scanf("%d",&size);
	printf("enter array elements\n");
	int i,arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("reversed array elements are\n");
	for (i=0;i<(size/2);i++)
	{
		b=arr[i];
		arr[i]=arr[size-1-i];
		arr[size-1-i]=b;
	}
	printf("reversed array is\n");
	for(i=0;i<size;i++)
	{



