//Write a program to check whether a given year is a leap year.
#include<stdio.h>
void main(){
	int year=2028;
	if(year%4==0&&year!=100||year%400==0)
	{
	printf("It a leap year");
	}
	else
	{
	printf("It is not a leap year");	
	}
}