//Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
//respectively.
#include<stdio.h>
void main(){
	double a=6000;
	double da,ta,hra,ts;
	if(a<=5000)
	{
		da=a*0.10;
		ta=a*0.20;
		hra=a*0.25;
		ts=da+ta+hra+a;
		printf("The total salary is %lf",ts);
	}
	else
	{
		da=a*0.15;
		ta=a*0.25;
		hra=a*0.30;
		ts=da+ta+hra+a;
		printf("The total salary is %lf",ts);
	}
	
}