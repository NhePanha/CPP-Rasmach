#include <iostream>
#include <iomanip>
#include <vector>
#include <string.h>
using namespace std;
class Person{
    protected:
        int id;
        string name;
        string gender;
    public:
        void Input()
        {
            cout<<"Enter ID     : ";cin>>id;
            cout<<"Enter Name   : ";cin>>name;
            cout<<"Enter Gender : ";cin>>gender;
        }
        void Output()
        {
            cout<<setw(12)<<id<<setw(12)<<name<<setw(12)<<gender;
        }
};
class DateTime:public Person{
    protected:
        string date, time;
        string dob;
    void Input()
    {
        Person::Input();
        cout<<"Enter Date of Birth (DD/MM/YYYY) : ";cin>>dob;
        cout<<"Enter Date (DD/MM/YYYY)         : ";cin>>date;
        cout<<"Enter Time (HH:MM)               : ";cin>>time;
    }
    void Output()
    {
        Person::Output();
        cout<<setw(12)<<dob<<setw(12)<<date<<setw(12)<<time;
    }
};
class Employee:public DateTime{
    private:
        double salary;
        int hour;
        double rate;
    public:
        void Input()
        {
            DateTime::Input();
            cout<<"Enter Salary : ";cin>>salary;
            cout<<"Enter Hour   : ";cin>>hour;
            cout<<"Enter Rate   : ";cin>>rate;
        }
        void Output()
        {
            DateTime::Output();
            cout<<setw(12)<<salary<<
            setw(12)<<hour<<setw(12)<<rate<<endl;
        }
        void EmpHeader()
        {
            cout<<setw(12)<<"ID"<<
            setw(12)<<"Name"<<
            setw(12)<<"Gender"<<
            setw(12)<<"DOB"<<
            setw(12)<<"Date"<<
            setw(12)<<"Time"
            <<setw(12)<<"Salary"<<
            setw(12)<<"Hour"<<
            setw(12)<<"Rate"<<endl;
        }
};
class Student:public DateTime{
    private:
        double math,english,khmer;
    public:
        void Input()
        {
            DateTime::Input();
            cout<<"Enter Math Score    : ";cin>>math;
            cout<<"Enter English Score : ";cin>>english;
            cout<<"Enter Khmer Score   : ";cin>>khmer;
        }
        double CalTotal()
        {
            return math + english + khmer;
        }
        double CalAverage()
        {
            return CalTotal() / 3;
        }
        char Grade()
        {
            double a =CalAverage();
            return (a>=90)?'A':
            (a>=80)?'B':
            (a>=70)?'C':
            (a>=60)?'D':
            (a>=50)?'E':'F';
        }
        void Ouptut()
        {
            DateTime::Output();
            cout<<setw(12)<<math<<setw(12)<<khmer<<setw(12)<<english<<setw(12)<<CalTotal()<<setw(12)<<CalAverage()<<setw(12)<<Grade()<<endl;
        }
        void StuHeader()
        {
            cout<<setw(12)<<"ID"<<
            setw(12)<<"Name"<<
            setw(12)<<"Gender"<<
            setw(12)<<"DOB"<<
            setw(12)<<"Date"<<
            setw(12)<<"Time"
            <<setw(12)<<"Math"<<
            setw(12)<<"Khmer"<<
            setw(12)<<"English"<<
            setw(12)<<"Total"<<
            setw(12)<<"Average"<<
            setw(12)<<"Grade"<<endl;
            cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
        }
};

int main()
{
    Employee employee;
    Student student;

    employee.Input();
    employee.EmpHeader();
    employee.Output();

    student.Input();
    student.StuHeader();
    student.Ouptut();
    return 0;
}