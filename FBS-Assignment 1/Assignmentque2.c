//Write a program to check given 3 digit number is pallindrome or not.
#include<stdio.h>
void main(){
	int number= 907;
	int r1,r2,r3,q1,reverse;
	r1=number%10;
	q1=number/10;
	r2=q1%10;
	r3=q1/10;
	reverse=r3*100+r2*10+r1;
	printf("number");
	
	if(number==reverse)
	{
		printf("The number is a pallindrome");
	}
	else
	{
		printf("The number is not a pallindrome");
	}
}