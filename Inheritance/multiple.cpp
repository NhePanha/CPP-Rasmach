#include <iostream>
#include <iomanip>
using namespace std;
class Person{
    protected:
        int id;
        string name, gender;
    public:
        Person()
        {
            id = 0;
            name = "Null";
            gender = "Null";
        }
        void Input()
        {
            cout<<"Enter ID : ";cin>>id;
            cout<<"Enter Name : ";cin>>name;
            cout<<"Enter Gender : ";cin>>gender;
        }
        void Output()
        {
            cout<<setw(12)<<id<<
            setw(12)<<name<<
            setw(12)<<gender;
        }
};
class Employee{
    protected:
        double salary,hour,rate;
    public:
        Employee()
        {
            salary = 0.0;
            hour = 0.0;
            rate = 0.0;
        }
        void Input()
        {
            cout<<"Enter salary       : ";cin>>salary;
            cout<<"Enter Hourly Rate  : ";cin>>rate;
            cout<<"Enter Hours Worked : ";cin>>hour;
        }
        double CalculateSalary()
        {
            return salary + (hour * rate);
        }
        void Output()
        {
            cout<<setw(12)<<salary<<
            setw(12)<<hour<<
            setw(12)<<rate<<
            setw(12)<<CalculateSalary();
        }
        
};
class Date:public Employee,public Person{
    private:
        string day, month, year;
    public:
        Date()
        {
            Person:Person();
            Employee:Employee();
            day = "01";
            month = "January";
            year = "2000";
        }
        void Input()
        {
            Person::Input();
            Employee::Input();
            cout<<"Enter Date (DD/MM/YYYY) : ";cin>>day>>month>>year;
        }
        void Output()
        {
            Person::Output();
            Employee::Output();
            cout<<setw(12)<<day<<
            setw(12)<<month<<
            setw(12)<<year<<endl;
        }
};
void Header()
{
    cout<<left<<setw(12)<<"ID"<<
    setw(12)<<"Name"<<
    setw(12)<<"Gender"<<
    setw(12)<<"Salary"<<
    setw(12)<<"Rate"<<
    setw(12)<<"Hour"<<
    setw(12)<<"Salary"<<
    setw(12)<<"Day"<<
    setw(12)<<"Month"<<
    setw(12)<<"Year"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
}
int main(){
    Date date;
    date.Input();
    Header();
    date.Output();
    return 0;
}