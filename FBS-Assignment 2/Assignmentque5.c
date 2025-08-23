//Accept the price from user. Ask the user if he is a student (user may say y or n). If he
//is a student and he has purchased more than 500 than discount is 20% otherwise
//discount is 10%.But if he is not a student then if he has purchased more than 600
//discount is 15% otherwise there is not discount.
#include<stdio.h>
void main(){
	int price,finalprice;
	char student;
	printf("Enter the price\n");
	scanf("%d",&price);
	printf("Student or not (y/n) \n");
	scanf(" %c",&student);
    if(student=='y')
    {
    	if(price>500)
    	finalprice=price-price*0.20;
    	else
    	finalprice=price-price*0.10;
    	printf("The final price is %d",finalprice);
    }
	else if(student=='n')
	if(price>650)
	{
	finalprice=price-price*0.15;
	printf("The final Price is \n%d",finalprice);
}
	    
}