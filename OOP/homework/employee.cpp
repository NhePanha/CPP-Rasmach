#include <iostream>
#include <iomanip>
using namespace std;
class Employee{
    private:
        // block data members
        int id;
        string name, department;
        double salary;
    public:
    // block methods
        // constructor
        Employee(int id, string name, string department, double salary)
        {
            this->id = id;
            this->name = name;
            this->department = department;
            this->salary = salary;
        }
        // destructor
        ~Employee()
        {
            cout << "Employee " << name << " is destroyed" << endl;
            salary = 0;
        }
        // setter methods
        void setId(int id) { 
            this->id = id; 
        }
        void setName(string name) { 
            this->name = name; 
        }
        void setDepartment(string department) { 
            this->department = department; 
        }
        void setSalary(double salary) { 
            this->salary = salary; 
        }
        // getter methods
        int getId() { 
            return id;
        }
        string getName() { 
            return name; 
        }
        string getDepartment() { 
            return department; 
        }
        double getSalary() { 
            return salary; 
        }
        // functions
        void AddEmployee();
        void display();
        
}
void Employee::AddEmployee()
{
    cout << "Enter Employee ID        : ";cin >> id;
    cout << "Enter Employee Name      : ";cin.ignore();getline(cin, name);
    cout << "Enter Employee Department: ";getline(cin, department);
    cout << "Enter Employee Salary    : ";cin >> salary;
}
void Header()
{
    cout<<setw(12)<<"Employee ID"<<
    setw(20)<<"Employee Name"<<
    setw(20)<<"Employee Department"<<
    setw(12)<<"Employee Salary"<<endl;
}
void Employee::display()
{
    cout<<setw(12)<<id<<
    setw(20)<<name<<
    setw(20)<<department<<
    setw(12)<<fixed<<setprecision(2)<<salary<<endl;
}
int main()
{

    return 0;
}