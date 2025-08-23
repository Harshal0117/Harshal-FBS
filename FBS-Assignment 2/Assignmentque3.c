//Write a program to find greatest of three numbers using nested if-else.
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three Numbers\n");
    scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%d is greatest Number",a);
	}
	else if(b>c)
	{
		printf("%d is greatest Number",b);
	}
	else
	{
		printf("%d is greatest Number",c);
	}
}