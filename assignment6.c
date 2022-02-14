//Binary search should be used because it will take less iterations. A binary search will half the list every time leaving you with less values to compare to
#include <stdio.h>

//global value for the key we are searching for
int key = 642;

void main(){
	//initialize array
	int array[] = {2, 4, 7, 8, 9, 10, 50, 122, 642, 777, 889};
	//gets size of array
	int size = sizeof(array);
	//initializes values used for comparing
	int first = 0;
	int last = size - 1;
	int middle = (size - 1)/2;
	//creates a loop of the whole array
	while (first <= last) {
		//compares the key to the middle value
		//if it is less than the key then the first gets redefined to 1 above the middle
	    if (array[middle] < key){
	         first = middle + 1;
	    }
	    //prints if the key if found
	    else if (array[middle] == key) {
	    	printf("%d found at location array[%d]", key, middle);
	        break;
	    }
	    //if it is greater than the key last is redefined to 1 less than middle
	    else{
	         last = middle - 1;
	    }
	    //redefines middle to the middle of the new array
	    middle = (first + last)/2;
	   }
}
