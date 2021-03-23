#include<stdio.h>
int rem_dup(int [],int);
int main()
{
	int i,len;
	printf("enter the length of array\n");
	scanf("%d", &len);
	int arr[len];
	printf("enter the array elements\n");
	for(i=0;i<len;i++)
	{
		scanf("%d", &arr[i]);
	}
	rem_dup(arr,len);
	return 0;
}
int rem_dup(int arr1[],int len1)
{
	int i,j,b,k;
	for(i=0;i<len1;i++)
	{
		b=arr1[i];
		for(j=0;j<(len1);j++)
		{
			if (b==arr1[i+j+1])
			{
				for(k=(i+j+1);k<(len1);k++)
				{
					arr1[k]=arr1[k+1];
				}
				len1--;
				j=0;
			}
		}
	}
	printf("the array after removing duplicates is\n");
	for(i=0;i<len1;i++)
	{
		printf("%d\t", arr1[i]);
	}
	return 0;
}
