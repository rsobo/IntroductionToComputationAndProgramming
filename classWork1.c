# include <stdio.h>

int main(){
	//Problem 1
	//int c, thisVariable, q76354, number, a;
	int a;
	printf("Enter a number: ");
	fflush( stdout ); //flushes buffer
	scanf("%d", &a);
	if(a != 7){
		printf("The number does not equal 7");
	}
	printf("\n\nThis is a C program\nThis is a C\nprogram\nThis\nis\na\nC\nprogram\nThis\tis\ta\tC\tprogram\n\n");
	//Problem 2
	fflush( stdout ); //flushes buffer
	product();
}

int product(){
	int x, y, z;
	printf("Enter 3 numbers: ");
	fflush( stdout ); //flushes buffer
	scanf("%d %d %d", &x, &y, &z);
	fflush( stdout ); //flushes buffer
	int result = x * y * z;
	printf("The product is: %d", result);
	return 0;
}
