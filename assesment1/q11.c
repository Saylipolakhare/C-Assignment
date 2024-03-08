// Create a structure called Employee that includes three fields - a first
//name (type String), a last name (type String) and a monthly salary (double).
//Write functions to initialize the fields, print them and modify the values in
//the given object. Example methods:
// void emp_init(struct emp* e);
// void set_salary(struct emp *e, double sal);
// void emp_display(struct emp *e);
//Write the test code in the main(). Create two emp objects and display each
//object’s yearly salary. Then give each Employee a 10% raise and display
//each Employee’s yearly salary again.






#include <stdio.h>
#include <string.h>

// Structure definition for Employee
struct Employee {
    char firstName[50];
    char lastName[50];
    double monthlySalary;
};

// Function to initialize the fields of an Employee object
void emp_init(struct Employee* e, const char* firstName, const char* lastName, double salary) {
    strcpy(e->firstName, firstName);
    strcpy(e->lastName, lastName);
    e->monthlySalary = salary;
}
// Function to set the monthly salary of an Employee
void set_salary(struct Employee* e, double salary) {
    e->monthlySalary = salary;
}

// Function to display the details of an Employee
void emp_display(struct Employee* e) {
    printf("Name: %s %s\n", e->firstName, e->lastName);
    printf("Monthly Salary: $%.2f\n", e->monthlySalary);
}

int main() {
    struct Employee emp1, emp2;

    // Initializing employee objects
    emp_init(&emp1, "John", "Doe", 5000.0);
    emp_init(&emp2, "Jane", "Smith", 6000.0);
    
    // Displaying yearly salary for each employee
    printf("Yearly Salary for Employee 1: $%.2f\n", emp1.monthlySalary * 12);
    printf("Yearly Salary for Employee 2: $%.2f\n", emp2.monthlySalary * 12);

    // Giving a 10% raise to each employee
    set_salary(&emp1, emp1.monthlySalary * 1.10);
    set_salary(&emp2, emp2.monthlySalary * 1.10);

    // Displaying yearly salary after the raise
    printf("\nAfter a 10%% raise:\n");
    printf("Yearly Salary for Employee 1: $%.2f\n", emp1.monthlySalary * 12);
    printf("Yearly Salary for Employee 2: $%.2f\n", emp2.monthlySalary * 12);

    return 0;
}

