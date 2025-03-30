#include <iostream>
#include <string>
using namespace std;

class Person{
    protected:
    string name;
    string address;
    
    public:
    Person(){
        
    }
    Person(string n,string addr){
        name = n;
        address = addr;
    }
    
    void setName(string n) {
        name = n;
    }
    void setAddress(string addr) {
        address = addr;
    }
    
    string getName() const {
        return name;
    }
    string getAddress() const {
        return address;
    }
    
};

class Employee: public Person{
    protected:
    int totalEmp;
    int workedHours;
    
    public:
    Employee(){
        
    }
    Employee(string n, string addr, int empNo, int empHour): Person(n, addr){
        totalEmp = empNo;
        workedHours = empHour;
    }
    void setTotalEmp(int empNo) { 
        totalEmp = empNo; 
        
    }
    void setWorkedHours(int hours) {
        workedHours = hours; 
        
    }
    
    int getTotalEmp() const {
        return totalEmp;
    }
    int getWorkedHours() const {
        return workedHours; 
        
    }
};

class ProductionWorker: public Employee{
    int shift;
    double hourRate;
    double salary;
    
    public:
    ProductionWorker(){
        
    }
    ProductionWorker(string n, string addr, int empNo, int hours, int shift, double rate): Employee(n, addr, empNo, hours) {
        
        this->shift = shift;
        hourRate = rate;
    }
    
    void setShift(int shift){
        shift = shift;
    }
    
    void setHourRate(double rate) { 
        hourRate = rate; 
        
    }
    
    int getShift() const{
        return shift;
    }
    
    double getHourRate() const {
        return hourRate; 
        
    }
    
    double calculateSalary(){
        salary = workedHours * hourRate;
        if (shift == 2 && workedHours > 5) {
            salary += 1000; 
        }
        return salary;
    }
    
    void printDetails() const {
        cout << "Employee Name: " << name << endl;
        cout << "Address: " << getAddress() << endl;
        cout << "Employee Number: " << getTotalEmp() << endl;
        cout << "Hours Worked: " << getWorkedHours() << endl;
        cout << "Shift: " << (shift == 1 ? "Day Shift" : "Night Shift") << endl;
        cout << "Hourly Pay Rate: " << getHourRate() << endl;
        cout << "Total Salary: " << salary << endl;
    }
};

int main(){
    ProductionWorker worker("Saad", "Islamabad", 7, 26, 1, 1200);
    
    worker.calculateSalary();
    worker.printDetails();
    
    

}

