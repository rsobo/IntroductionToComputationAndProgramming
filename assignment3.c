# include <stdio.h>

//prints a multiplication table from 1-10 with the value entered
void main(){

	int num;
	printf("Enter the number to print the table for!\n");
	fflush(stdout); //flushes buffer
	scanf("%d", &num);
	printf("---------------------------");
	//loops through to create the table
	for(int i = 1; i < 11; i++){
		printf("\n%d x %d = %d", num, i, num * i);
	}
}
