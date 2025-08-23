//Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.
#include<stdio.h>
void main()
{
	int s1,s2,s3;
	printf("Enter Three sides \n");
	scanf("%d",&s1);
	scanf("%d",&s2);
	scanf("%d",&s3);
	if(s1==s2&&s2==s3)
	{
		printf("The triangle is equilateral triangle");
	}
	else if(s1==s2||s2==s3||s3==s1)
	{
		printf("The triangle is isosceles triangle");
	}
	else
	{
		printf("The triangle is scalene triangle");
	}
}