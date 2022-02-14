# include <stdio.h>

void main(){
	printf("Enter a year between 1600 and 2050: ");
	int year;
	fflush( stdout ); //flushes buffer
	scanf("%d", &year);
	while(year >= 1600 && year <= 2050){
		if(year % 100 == 0){
			if(year % 400 == 0){
				printf("The year entered is a leap year");
			}
			else{
				printf("The year entered is not a leap year");
			}
		}
		else if(year % 4 == 0){
			printf("The year entered is a leap year");
		}
		else{
			printf("The year entered is not a leap year");
		}
		printf("\nEnter a year between 1600 and 2050: ");
		fflush( stdout ); //flushes buffer
		scanf("%d", &year);
	}
	printf("Error: year entered was not in range");
}
