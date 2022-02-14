# include <stdio.h>
# define SIZE 20
//this program takes in an array of SIZE from the user then prints it out and prints it reversed
void main(){

	int array[SIZE] = {};
	printf("Enter %d integer(s): ", SIZE);
	fflush(stdout); //flushes buffer
	//accepts array value
	for(int i = 0; i < SIZE; i++){
		scanf("%d", &array[i]);
	}
	//prints array
	printf("Here is your array: ");
	for(int i = 0; i < SIZE - 1; i++){
		printf("%d, ", array[i]);
	}
	printf("%d.\n", array[SIZE - 1]);
	int reversedArray[SIZE] = {};
	int count = 0;
	//set a new array to the reversed array
	for(int i = SIZE - 1; i > 0; i--){
		reversedArray[count] = array[i];
		count++;
	}
	//prints reversed array
	printf("Here is your reversed array: ");
	for(int i = 0; i < SIZE - 1; i++){
		printf("%d, ", reversedArray[i]);
	}
	printf("%d.", reversedArray[SIZE]);
}
