#include <iostream>
#include <vector>
using namespace std;
// create structure
struct Person{
    int id;
    string name, gender;
    struct Employee{
        double salary;
        struct Staff{
            string position;
        }sta;
    }emp;
}per;

void Input()
{
    cout<<"Enter Employee ID   : ";cin>>per.id;
    cout<<"Enter Employee Name : ";cin.ignore();getline(cin,per.name);
    cout<<"Enter Employee Salary: ";cin>>per.emp.salary;
    cout<<"Enter Staff Position : ";cin.ignore();getline(cin,per.emp.sta.position);
}
void Display()
{
    cout<<"Employee ID   : "<<per.id<<endl;
    cout<<"Employee Name : "<<per.name<<endl;
    cout<<"Employee Salary: "<<per.emp.salary<<endl;
    cout<<"Staff Position : "<<per.emp.sta.position<<endl;
}
int main()
{
    // create object of Person structure
    Input();
    Display();
    
    return 0;
}