# include <stdio.h>
# include <stdlib.h>

int returnNumbers(int);

void main(){

	int num;
	int randoms[4];
	printf("Enter a positive integer: ");
	fflush(stdout); //flushes buffer
	scanf("%d", &num);
	for(int i = 0; i < 4; i++){
		randoms[i] = returnNumbers(num);
	}
	float avg = 0.0;
	for(int i = 0; i < 4; i++){
		avg += randoms[i];
	}
	printf("\nThe average is: %.1f", avg/4);
}

int returnNumbers(int num){
	return 1 + (rand() % num);
}
