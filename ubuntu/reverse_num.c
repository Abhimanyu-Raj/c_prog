#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,arr[100],rev=0,i=0,j,mul;
	printf("enter the number for reversing\n");
	scanf("%d", &a);
	b=a;
	do {
		arr[i]=b%10;
		b=b/10;
		arr[i+1]=b;
		i++;
	} while (b>=10);
	for(j=0;j<=i;j++)
	{
		mul=pow(10,(i-j)); //must use -lm during compiling to link to math lib.
		rev=rev+(arr[j]*mul);
	}
	printf("the reversed number is %d\n", rev);
	return 0;
}
