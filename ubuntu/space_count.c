#include<stdio.h>
int main()
{
	int count=0,c,c2=0,c3=0;
	printf("This program counts spaces, tabs, lines till file is ended\n press cntrl+D to end file and see output\n\n");
	printf("enter the characters/string/lines\n");	
	while((c=getchar())!=EOF)
	{
		if(c=='\n')
		{
			count++;
		}
		else if (c==' ')
		{
			c2++;
		}
		else if (c=='	')
		{
			c3++;
		}
	}
	printf("spaces=%d tabs=%d lines=%d\n",c2,c3,count);
	return 0;
}
