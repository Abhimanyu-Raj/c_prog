#include<stdio.h>
int main()
{
	char name[100];
	printf("enter name\n");
	fgets(name,100,stdin);
	printf("name is: %s\n", name);
	return 0;
}
