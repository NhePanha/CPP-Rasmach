#include <iostream>
#include <iomanip>
using namespace std;
class Person{
    protected:
        int id;
        string name,gender;
        double height, weight;
    public:
        Person()
        {
            id = 0;
            name = "Null";
            gender = "Null";
            height = 0.0;
            weight = 0.0;
        }
        void Input(){
            cout<<"Enter ID      : ";cin>>id;
            cout<<"Enter Name    : ";cin>>name;
            cout<<"Enter Gender  : ";cin>>gender;
            cout<<"Enter Height  : ";cin>>height;
            cout<<"Enter Weight  : ";cin>>weight;
        }
        void Output(){
            cout<<setw(12)<<id<<setw(12)<<name<<setw(12)<<gender<<setw(12)<<height<<setw(12)<<weight;
        }
};
class Student: public Person{
    private:
        double math,khmer,english;
        double average,total;
        char grade;
    public:
        Student(){
            Person:Person();
            math = 0.0;
            khmer = 0.0;
            english = 0.0;
            average = 0.0;
            total = 0.0;
            grade = 'N';
        }
        void Input(){
            Person::Input();
            cout<<"Enter Math Score    : ";cin>>math;
            cout<<"Enter Khmer Score   : ";cin>>khmer;
            cout<<"Enter English Score : ";cin>>english;
        }
        double Calculate(){
            return total = math + khmer + english;
        }
        double CalculateAverage(){
            return average = total / 3.0;
        }
        char CalculateGrade(){
            return grade = (average>=80)?'A':
            (average>=70)?'B':
            (average>=60)?'C':
            (average>=50)?'D':'F';
        }
        void Output(){
            Person::Output();
            cout<<setw(12)<<math<<setw(12)<<khmer<<setw(12)<<english<<setw(12)<<Calculate()<<setw(12)<<CalculateAverage()<<setw(12)<<CalculateGrade()<<endl;
        }
};
void Header()
{
    cout<<setw(12)<<"ID"<<setw(12)<<"Name"<<setw(12)<<"Gender"<<setw(12)<<"Height"<<setw(12)<<"Weight"
    <<setw(12)<<"Math"<<setw(12)<<"Khmer"<<setw(12)<<"English"<<setw(12)<<"Total"<<setw(12)<<"Average"<<setw(12)<<"Grade"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
}
int main(){
    Student stu;
    // stu.Input();
    Header();
    stu.Output();
}