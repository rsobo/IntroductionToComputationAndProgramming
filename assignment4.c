# include <stdio.h>

float cylinder(float, float);
//finds volume of a cylinder
void main(){
	float rad, height;
	printf("Enter Radius of Cylinder: ");
	fflush(stdout); //flushes buffer
	scanf("%f", &rad);
	printf("\nEnter Height of Cylinder: ");
	fflush(stdout); //flushes buffer
	scanf("%f", &height);
	printf("\nThe volume of the cylinder is: %.2f", cylinder(rad, height));

}
//returns the volume of a cylinder
float cylinder(float rad, float height){
	return 3.1415 * rad * rad * height;
}
