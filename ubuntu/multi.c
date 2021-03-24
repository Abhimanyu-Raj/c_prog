#include<stdio.h>
void fuc(int [][3],int,int);
int main()
{
	int i=2,j=3,k,l;
	int arr[i][j];
	for(k=0;k<i;k++)
	{
		for(l=0;l<j;l++)
		{
			scanf("%d", &arr[k][l]);
		}
	}
	fuc(arr,i,j);
	return 0;
}
void fuc(int arr1[][3],int i,int j)
{
	printf("%d %d %d\n",arr1[i-1][j-1],i,j);
}	
