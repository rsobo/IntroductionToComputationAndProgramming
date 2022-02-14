# include <stdio.h>
# include <String.h>
void main(){

	int count = 0;
	char letters[3] = {'Programming', 'is', 'awesome'};
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < strlen(letters[i]); j++){
			if(letters[i][j] == "m"){
				count++;
			}
		}
	}
	printf("%d", count);
}
