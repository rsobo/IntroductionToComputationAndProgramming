# include <stdio.h>

int main(){

	unsigned int count, grade, total;
	float average;
	printf("Enters grades, -1 to stop: ");
	fflush( stdout ); //flushes buffer
	scanf("%d", &grade);
	while(grade != -1){
		count++;
		total += grade;
		scanf("%d", &grade);
	}
	printf("%d\n", count);
	printf("%d\n", total);
	average = total / count;
	printf("Class average is: %f", average);

}
