# include <stdio.h>

int main(){

    int int1, int2;



    printf("Enter first integer\n");
    fflush( stdout ); //flushes buffer
    scanf("%d", &int1);

    printf("Enter second integer\n");
    fflush( stdout ); //flushes buffer
    scanf("%d", &int2);

    printf("Sum is %d\n", int1 + int2);
}
