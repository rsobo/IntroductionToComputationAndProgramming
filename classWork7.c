# include <stdio.h>

float triangle(float, float);
float circle(float);
//finds the area of a triangle and circle
void main(){

	float base, height;
	printf("Enter base of triangle: ");
	fflush(stdout); //flushes buffer
	scanf("%f", &base);
	printf("Enter height of triangle: ");
	fflush(stdout); //flushes buffer
	scanf("%f", &height);
	float areaT = triangle(base, height);
	float areaC = circle(base / 3);
	printf("Triangle area: %.2f", areaT);
	printf("\nCircle area: %.2f", areaC);
	float diff = areaC - areaT;
	//if else to decide which shape is bigger
	if(diff < 0){
		printf("\nTriangle is bigger by: %.2f", (diff * -1));
	}
	else{
		printf("\nCircle is bigger by: %.2f", diff);
	}
}
//returns area of a triangle
float triangle(float base, float height){
	return .5 * base * height;
}
//returns area of a circle
float circle(float radius){
	return radius * radius * 3.1415;
}
