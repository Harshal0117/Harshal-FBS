//Write a C program to convert given minutes into hours and remaining minutes.
void main(){
	int Minutes,Hours,Remaining_minutes;
	Minutes=100;
	Hours=Minutes/60;
	Remaining_minutes=Minutes%60;
	printf("Converted Minutes in Hours and remaining minutes is %d hour and %d Minutes",Hours,Remaining_minutes);
	
	
}