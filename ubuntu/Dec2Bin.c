#include<stdio.h>
int main()
{
	int a,arr[100];
	printf("enter the Decimal number\n");
	scanf("%d", &a);
	int q,j,i=0,r;
	q=a;
	do {
		r=q%2;
		q=q/2;
		arr[i]=r;
		arr[i+1]=1;
		i++;
	} while (q!=1);
	printf("the bninary value is\n");
	for (j=i;j>=0;j--)
	{
		printf("%d ", arr[j]);
	}
	printf("\n");
	return 0;
}



