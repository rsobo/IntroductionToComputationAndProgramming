# include <stdio.h>

void part1();
void part2();
void part3();

void main(){
	fflush(stdout);
	part1();
	printf("---------------------------\n");
	part2();
	fflush(stdout);
	printf("---------------------------\n");
	part3();
}

void part1(){
	int nums[6] = {2,4,6,8,10,12};
	for(int i = 0; i < 6; i++){
		printf("Element: %d, Value: %d\n", i, nums[i]);
		fflush(stdout);
	}
}

void part2(){
	int nums[5] = {};
	int sum = 0;
	int max = 0;
	fflush(stdout);
	for(int i = 0; i < 5; i++){
		scanf("%d", &nums[i]);
		fflush(stdout);
		sum += nums[i];
		if(nums[i] > max){
			max = nums[i];
		}
	}
	printf("Avg: %.1f, Max: %d\n", sum/5.0, max);
}

void part3(){
	int nums[5] = {};
	for(int i = 0; i < 5; i++){
		nums[i] = 1 + (rand() % 10);
	}
	for(int i = 0; i < 5; i++){
		printf("%d, ", nums[i]);
	}

}
