#include<stdio.h>
int read_mat(int [][100], int [][100],int,int,int,int);
int mul_mat(int [][100], int [][100],int,int,int,int);

int main()
{
	int row1,col1,row2,col2;
	printf("enter row and column size of 1st matrix\n");
	scanf("%d %d",&row1,&col1);
	printf("enter row and column size of 2nd matrix\n");
	scanf("%d %d", &row2,&col2);
	
	int a[row1][col1];
	int b[row2][col2];
	
	read_mat(a,b,row1,col1,row2,col2);
	mul_mat(a,b,row1,col1,row2,col2);
	return 0;
}

int read_mat(int a[][100], int b[][100],int row1,int col1,int row2,int col2)
{
	int i,j;
	printf("enter 1st matrix elements\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter 2nd matrix elements\n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	return 0;
}
int mul_mat(int a[][100], int b[][100],int row1,int col1,int row2,int col2)
{
	int i,j,k,sum=0;
	int c[row1][col2];
	if (col1==row2)
	{
		for(i=0;i<row1;i++)
		{
			for(k=0;k<col2;k++)
			{
				for(j=0;j<col1;j++)
				{
					sum=sum+(a[i][j]*b[j][k]);
				}
				c[i][k]=sum;
			}
		}
	
		printf("the multiplied matrix is\n");
		for(i=0;i<row1;i++)
		{
			for(k=0;k<col2;k++)
			{
				printf("%d\t",c[i][k]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("error: the column size of 1st matrix should be equal to row size of second matrix for successful multiplication\n");
	}

	return 0;
}
