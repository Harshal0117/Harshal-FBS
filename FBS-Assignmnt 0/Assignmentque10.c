#include <stdio.h>
void main(){
	int Maths,Marathi,Hindi,English,It,Totalmarks,Percentage;
	Maths=55;
    Marathi=60;
    Hindi=75;
    English=75;
    It=85;
    Totalmarks=Maths+Marathi+Hindi+English+It;
    Percentage=(Totalmarks*100)/500;
    printf("Total Marks %d and percentage is %d",Totalmarks,Percentage);
    
}