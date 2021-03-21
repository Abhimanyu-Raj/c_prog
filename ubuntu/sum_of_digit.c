#include<stdio.h>
int main()
{
	int a,b,arr[100],sum=0,i=0,j;
	printf("enter the number for finding its sum\n");
	scanf("%d", &a);
	b=a;
	do {
		arr[i]=b%10;
		b=b/10;
		arr[i+1]=b;
		i++;
	} while (b>=10);
	for(j=0;j<=(i+1);j++)
	{
		sum=sum+arr[j];
	}
	printf("the sum of digits is %d\n", sum);
	return 0;
}
