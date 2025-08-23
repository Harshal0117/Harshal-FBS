//Write a program to check whether a given character is a vowel or consonant.
#include<stdio.h>
void main(){
	char character = 'j' ;
    if (character=='a'||character=='e'||character=='i'||character=='o'||character=='u'||character=='A'||character=='E'||character=='I'||character=='O'||character=='U')
    {
    	printf("The character is Vowel");
	}
	else
	{
		printf("The character is Constant");
	}
}