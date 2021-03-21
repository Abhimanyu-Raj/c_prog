#include<stdio.h>
int main()
{
	int i,j,x=0,e=0,count=nclude<stdio.h>
		int main()
		{
			int i,j,x=0,e=0,count=1,k=0,d,a,b,len,arr[100],arr2[100];
			arr2[0]=-1;
			printf("enter array length\n");
			scanf("%d", &len);
			printf("enter array elements\n");
			for (a=0;a<len;a++)
			{
				scanf("%d", &arr[a]);
			}
			for (i=0;i<len;i++)
			{
				if (arr2[e]!=i)
				{
					b=arr[i];
					for (j=i;j<len;j++)
					{
						if (b==arr[j+1])
						{
							count++;
							d=(j+1);
							arr2[k]=d;
							k++;
							"fre_numb.c" 37L, 525C5,9-16Top
								
								k++;
							"fre_numb.c" 37L, 525C5,9-16Top
								1,k=0,d,a,b,len,arr[100],arr2[100];
							arr2[0]=-1;:1,k=0,d,a,b,len,arr[100],arr2[100];
	arr2[0]=-1;
	printf("enter array length\n");
	scanf("%d", &len);
	printf("enter array elements\n");
	for (a=0;a<len;a++)
	{
		scanf("%d", &arr[a]);
	}
	for (i=0;i<len;i++)
	{
		if (arr2[e]!=i)
		{
			b=arr[i];
			for (j=i;j<len;j++)
			{
				if (b==arr[j+1])
				{
					count++;
					d=(j+1);
					arr2[k]=d;
					k++;
				}
			}
			printf("%d is repeated %d times\n", b,count);
			count=1;
		}
		else
		{
			e++;
		}
	}
	return 0;
}
