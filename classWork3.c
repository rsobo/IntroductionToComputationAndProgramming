# include <stdio.h>
# include <stdbool.h>
# include <math.h>

int main(){

	float rate, hours, salary;
	while(true){
		printf("Enter # of hours worked (-1 to end): ");
		fflush( stdout ); //flushes buffer
		scanf("%f", &hours);
		if(hours == -1){
			break;
		}
		printf("Enter hourly rate: ");
		fflush( stdout ); //flushes buffer
		scanf("%f", &rate);
		if(hours <= 40){
			salary = hours * rate;
			printf("\nSalary is $%.2f\n", salary);
		}
		else if(hours > 40){
			float overtime = fmodf(hours, 40);
			overtime *=  1.5;
			salary = (40 + overtime) * rate;
			printf("\nSalary is $%.2f\n", salary);
		}
	}
}
