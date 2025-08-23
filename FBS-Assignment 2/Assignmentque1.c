//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.
#include<stdio.h>
void main(){
	int numbera,numberb,Result;
	char operator;
	printf("Enter The First Number \n");
	scanf("%d",&numbera);
	
	printf("Enter the operators(+,-,*,/,%)\n");
	scanf(" %c",&operator);
	
	printf("Enter the Second Number \n");
	scanf("%d",&numberb);
	
	if(operator== '+' )
	{
		Result=numbera+numberb;
		printf("Result = %d\n", Result);
	}
	else if(operator== '-')
	{
		Result=numbera-numberb;
		printf("Result = %d\n", Result);
	}
	else if(operator=='*')
	{
			Result=numbera*numberb;
		printf("Result = %d\n", Result);
	}
	else if(operator=='/')
	{
			Result=numbera/numberb;
		printf("Result = %d\n", Result);
	}
	else if(operator=='%')
	{
			Result=numbera%numberb;
		printf("Result = %d\n", Result);
	}
}