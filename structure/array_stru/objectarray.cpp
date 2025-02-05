#include <iostream>
#include <iomanip>
using namespace std;
int i;
struct Employee{
    int id;
    string name;
    string gender;
    double salary;
    int age;
}emp[100];
void addEmployee(){
    cout<<"Enter Employee ID   : ";cin>>emp[i].id;
    cout<<"Enter Employee Name : ";cin>>emp[i].name;
    cout<<"Enter Employee Gender: ";cin>>emp[i].gender;
    cout<<"Enter Employee Salary: ";cin>>emp[i].salary;
    cout<<"Enter Employee Age  : ";cin>>emp[i].age;
}
void Header()
{
    cout<<left<<setw(10)<<"ID"<<
    setw(15)<<"Name"<<
    setw(10)<<"Gender"<<
    setw(15)<<"Salary"<<
    setw(10)<<"Age"<<endl;
}
void displayEmployee(){
    
    cout<<left<<setw(10)<<emp[i].id<<
    setw(15)<<emp[i].name<<
    setw(10)<<emp[i].gender<<
    setw(15)<<emp[i].salary<<
    setw(10)<<emp[i].age<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number of employees : ";cin>>n;
    for(i=0; i<n; i++){
        addEmployee();
    }
    Header();
    for(i=0; i<n; i++){
        displayEmployee();
    }
    return 0;
}
