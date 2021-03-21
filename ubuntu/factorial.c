#include<stdio.h>
int main()
{
	int a;
	printf("enter the number whose factorail required!\n");
	scanf("%d", &a);
	int b,i;
	b=a;
	for (i=1;i<a;i++)
	{
		b=b*(a-i);
	}
	printf("the factorail value of the given number is = %d\n", b);
	return 0;
}
