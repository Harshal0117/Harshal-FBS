//Write a C program to input five numbers and find their average.
void main()
{
	int Maths,Physics,English,It,Hindi;
    int Average;
	
	printf("Enter the Value. \n");
	printf("Maths \n");
	scanf("%d", &Maths);
	printf("Enter the Value. ");
	printf("Physics \n");
	scanf("%d", &Physics);
	printf("Enter the Value. ");
	printf("English \n");
	scanf("%d", &English);
	printf("Enter the Value. ");
	printf("It \n");
	scanf("%d", &It);
	printf("Enter the Value. ");
	printf("It \n");
	scanf("%d", &Hindi);
	
	Average=(Maths+Physics+English+It+Hindi)/5;
	printf("Average marks of all subjects is %d",Average);
	
	
	
	
	
}