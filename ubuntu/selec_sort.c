#include<stdio.h>
int selec(int [],int);
int main()
{
	int i,size;
	printf("enter the size of array\n");
	scanf("%d",&size);
	int arr1[size];
	printf("enter the array\n");
	for (i=0;i<size;i++)
	{
		scanf("%d", &arr1[i]);
	}
	selec(arr1,size);
	return 0;
}
int selec(int arr1[],int size)
{
	int i,j,x,b,temp;
	for(j=0;j<size;j++)
	{
		b=arr1[j];
		for(i=j;i<size;i++)
		{
			if (b>arr1[i])
			{
				b=arr1[i];
				x=i;
			}
		}
		temp=arr1[x];
		arr1[x]=arr1[j];
		arr1[j]=temp;
	}
	printf("sorted array is\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr1[i]);
	}
	printf("\n");
}
