# include <stdio.h>

//creates the employee structure
struct employee{
	char firstName[20];
	char lastName[20];
	unsigned int age;
	char gender[20];
	double salary;

};

void main(){
	//creates employee1
	struct employee employee1 = {"John", "Smith", 20, "Male", 12.5};
	printf("Employee 1\nName: %s %s\nAge: %d\nGender: %s\nHourly Salary: %.2f", employee1.firstName, employee1.lastName, employee1.age, employee1.gender, employee1.salary);
	//^^prints the info of employee1
}
