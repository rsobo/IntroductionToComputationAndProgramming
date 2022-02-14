# include <stdio.h>

void main(){

	float values[8]= {};
	printf("Enter the 8 values:\n");
	fflush(stdout); //flushes buffer
	for(int i = 0; i < 8; ++i){
		scanf("%f", &values[i]);
		fflush(stdout); //flushes buffer
	}
	float max = 0;
	float min = 100000;
	float sum;
	for(int i = 8; i >= 0; i--){
		if(max < values[i]){
			max = values[i];
		}
		else if(min > values[i]){
			min = values[i];
		}
		sum += values[i];
	}
	printf("Max: %.1f\nMin: %.1f\nAverage:%.1f", max, min, (sum/8.0));
}
