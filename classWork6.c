# include <stdio.h>

//All parts built off each other so this is the code for the final part
void main(){
	int x;
	int sum = 0;
	for(int i = 0; i < 5; i++){
		printf("Enter an Integer: ");
		fflush(stdout); //flushes buffer
		scanf("%d", &x);
		sum += equation(x);
		printf("The returned value of (3 * x * x + 5) is: %d\n", equation(x));
	}
	printf("--------------------------------------------\n");
	printf("sum =                                    %d", sum);
}

int equation(int x){
	return (3 * x * x + 5);
}
