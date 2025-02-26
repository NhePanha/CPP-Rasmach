#include <iostream>
#include <iomanip>
#include <vector>
#include <string.h>
using namespace std;
// class 
class Person{
    protected:
        int id;
        string name;
        string gender;
    public:
    // for search values
        int getID()
        {
            return id;
        }
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
// class
//--------------------------
// functions search
void SearchEmployee(vector<Employee> employee)
{
    int id;
    cout<<"Enter Employee ID : ";cin>>id;
    for(auto &e :employee)
    {
        if(e.getID()==id){
            e.Output();
            return;
        }
    }
}
// functions
int main()
{
    int op;
    do{
        cout<<"====================================================="<<endl;
        cout<<"\t\t[1 E M P L O Y E E      ]"<<endl;
        cout<<"\t\t[2 S T U D E N T S      ]"<<endl;
        cout<<"======================================================"<<endl;
        cout<<"Enter Your Choice : ";cin>>op;
        switch(op){
            case 1:{
                Employee emp;
                vector<Employee> employees;
                int op;
                do{
                    cout<<"==============[ E M P L O Y E E ]================="<<endl;
                    cout<<"[1 ADD EMPLOYEE       ]"<<endl;
                    cout<<"[2 DISPLAY EMPLOYEE   ]"<<endl;
                    cout<<"[3 SEARCH EMPLOYEE    ]"<<endl;
                    cout<<"[4 DELETE EMPLOYEE    ]"<<endl;
                    cout<<"[5 UPDATE EMPLOYEE    ]"<<endl;
                    cout<<"[6 INSERT EMPLOYEE    ]"<<endl;
                    cout<<"[7 ADD EMPLOYEE       ]"<<endl;
                    cout<<"================================================"<<endl;
                    cout<<"Enter Your Choice : ";cin>>op;
                    switch(op){
                        case 1:{
                            int n;
                            cout<<"Enter Number of Employees : ";cin>>n;
                            for(int i=0;i<n;i++){
                                Employee emp;
                                emp.Input();
                                employees.push_back(emp);
                            }
                        }break;
                        case 2:{
                            emp.EmpHeader();
                            for(auto &emp:employees){
                                emp.Output();
                            }
                        }break;
                        case 3:{
                            SearchEmployee(employees,emp.EmpHeader());
                        }break;
                    }
                }while(op!=0);
            }break;
            case 2:{
                Student stu;
                vector<Student> students;
                int op;
                do{
                    cout<<"==============[ S T U D E N T S ]================="<<endl;
                    cout<<"[1 ADD EMPLOYEE       ]"<<endl;
                    cout<<"[2 DISPLAY EMPLOYEE   ]"<<endl;
                    cout<<"[3 SEARCH EMPLOYEE    ]"<<endl;
                    cout<<"[4 DELETE EMPLOYEE    ]"<<endl;
                    cout<<"[5 UPDATE EMPLOYEE    ]"<<endl;
                    cout<<"[6 INSERT EMPLOYEE    ]"<<endl;
                    cout<<"[7 ADD EMPLOYEE       ]"<<endl;
                    cout<<"================================================"<<endl;
                    cout<<"Enter Your Choice : ";cin>>op;
                    switch(op){
                        case 1:{
                            int n;
                            cout<<"Enter Number of Students : ";cin>>n;
                            for(int i=0; i<n; i++)
                            {
                                Student stu;
                                stu.Input();
                                students.push_back(stu);
                            }
                        }break;
                        case 2:{
                            stu.StuHeader();
                            for(auto &s:students){
                                s.Ouptut();
                            }
                        }break;
                    }
                }while(op!=0);
            }
        }
    }while(op!=0);
    return 0;
}