//Write a program to check whether a given character is uppercase or lowercase.
#include<stdio.h>
void main(){
	char character='N';
	if(character>='A'&&character<='Z')
	{
		printf("The Character is in uppercase");
	}
	else
	{
		printf("The Character is in lowercase");
	}
}