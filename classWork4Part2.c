# include <stdio.h>

void main(){
	float values[8]= {};
	int count = 0;
	printf("Enter the 8 values:\n");
	fflush(stdout); //flushes buffer
	do{
		scanf("%f", &values[count]);
		fflush(stdout); // flushes buffer
		++count;
	}while(count < 8);
	float max = 0;
	float min = 10000;
	float sum;
	int count2 = 8;
	do{
		if(max < values[count2]){
			max = values[count2];
		}
		else if(min > values[count2]){
			min = values[count2];
		}
		sum += values[count2];
		count2--;
	}while(count2 >= 0);

	printf("Max: %.1f\nMin: %.1f\nAverage: %.1f", max, min, (sum/8.0));
}
