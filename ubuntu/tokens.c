
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char arr[1000];
	fgets(arr,1000,stdin);
	int count=0,b,i,j,k;
	k=strlen(arr);
	arr[k-1]='\0';
	for(i=0; i<(k-1); i++)
	{
		b=count;
		while ((arr[count]!='\0') && (arr[count]!=' '))
		{
			count++;
		}
		for(j=b; j<count; j++)
		{
			printf("%c", arr[j]);
		}
		if (arr[count]!='\0')
		{
			printf("\n");
		}
		count++;
	}
	return 0;
}

