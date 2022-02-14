#include <stdio.h>

struct employee{
	char name[20];
	int ssn;
	float salary;
}Steve;


void main(){

	struct employee first = {"John", 123456789, 7500}; // first is a variable and its type is "struct employee"

	// Using dot operator
	printf("The information  of variable first using dot operator: \n");
	printf("\nfirst.name = %s", first.name);
	printf("\nfirst.ssn = %d", first.ssn);
	printf("\nfirst.salary = %f", first.salary);

	// using arrow operator
	struct employee *ptr;
	ptr = &first;
	printf("\n\n");
	printf("\nThe information of variable first using arrow operator: \n");
	printf("\nptr->name = %s", ptr->name);
	printf("\nptr->ssn = %d", ptr->ssn);
	printf("\nptr->salary = %f", ptr->salary);


	struct employee Steve = {"Steve", 99999, 1530};
	printf("\nThe information  of variable Steve using dot operator: \n");
	printf("\nfirst.Name = %s", Steve.name);
	printf("\nfirst.ssn = %d", Steve.ssn);
	printf("\nfirst.salary = %f", Steve.salary);

	struct employee *ptr2;
	ptr2 = &Steve;
	printf("\n The information  of variable Steve using arrow operator: \n");
	printf("\nptr->name = %s", ptr2->name);
	printf("\nptr->ssn = %d", ptr2->ssn);
	printf("\nptr->salary = %f", ptr2->salary);


	struct employee second;
	printf("\n Enter the name of the employee: ");
	scanf("%s", &second.name);

	printf("\n Enter the ssn of the employee: ");
	scanf("%d", &second.ssn);

	printf("\n Enter the salary of the employee: ");
	scanf("%f", &second.salary);

	printf("\n\n name of second = %s", second.name);
	printf("\n\n ssn of second = %d", second.ssn);
	printf("\n\n salary of second = %g", second.salary);


	struct employee *ptr3;
	ptr = & second;

	printf("\n\n name of second->name  = %s", ptr3->name);
	printf("\n\n ssn of second->ssn = %d", ptr3->ssn);
	printf("\n\n salary of second->salary = %g", ptr3->salary);

}
