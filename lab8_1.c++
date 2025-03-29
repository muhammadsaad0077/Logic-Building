#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    string name;
    string address;
    
};

class Employee: public Person{
    int totalEmp;
    int workedHours;
};

class ProductionWorker: public Employee{
    int shift;
    double hourRate;
    double salary;
    int dayShift;
    int nightShift;
    
    
    if(nightShift > 5){
        salary += 1000;
    }
    
    ProductionWorker(){
        
    }
    ProductionWorker(){
        
    }
}

int main(){
    
    

}


/*
1. Base Class: Person
Design a class named Person, which contains the following data members:
● Name (string)
● Address (string)
2. Derived Class: Employee (Inherits from Person)
Create a class named Employee, which is derived from the Person class.
This class should have the following additional attributes:
● Employee Number (int)
● Hours Worked (int)
Implement constructors, along with appropriate setter and getter functions.
3. Derived Class: ProductionWorker (Inherits from Employee)
Create a class named ProductionWorker, which is derived from the Employee
class.

This class should include the following additional attributes:
● Shift (int)
● Hourly Pay Rate (double)
● Salary (double)
The Shift variable represents the shift that the employee works:
● Shift 1 → Day Shift
● Shift 2 → Night Shift

If an employee works more than 5 hours in the night shift, they receive a bonus of
1000.
4. Required Member Functions in ProductionWorker
● Parameterized Constructors – Initialize object attributes.
● Setters and Getters – For all data members.
● double calculateSalary() – Computes the employee's salary based on their
hourly pay rate and hours worked.
● void print_details() – Displays the complete details of the employee.
5. Implementation in Main Function
● Create objects of the ProductionWorker class.
● Compute the salary using the calculateSalary() function.
● Display the employee details using the print_details() function.

*/