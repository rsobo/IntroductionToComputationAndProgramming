# include <stdio.h>

void main(){
	int sum = 0;
	for(int i = 1; i < 100; i += 2){
		sum += i;
	}
	printf("%d", sum);

	printf("\n---------------------------------------------\n");

	int x = 1;
	int count = 1;
	while(x <= 20){
		if(count % 5 == 0){
			printf("%d\n", x);
		}
		else{
			printf("%d\t", x);
		}
		count++;
		x++;
	}
}
