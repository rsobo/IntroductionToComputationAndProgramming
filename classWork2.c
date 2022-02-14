#include <stdio.h>

int main(){
	rectangleArea();
	equation();

}

int rectangleArea(){
	printf("Enter Length and Width of the Rectangle: ");
	fflush( stdout ); //flushes buffer
	float l, w;
	scanf("%f %f", &l, &w);
	printf("\nThe area is: %f\n", l * w);
	return 0;
}

int equation(){
	printf("Enter 2 numbers: ");
	fflush( stdout ); //flushes buffer
	float x, w;
	scanf("%f %f", &x, &w);
	printf("\nThe solved equation is: %f", (2 * x * x) + 3 * w);
	return 0;
}
