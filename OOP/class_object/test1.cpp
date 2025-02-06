#include <iostream>
using namespace std;
// create class Person
class Person{
    private:
        // block data members
        int id;
        string name, gender;
        double height, weight;
    public:
        // block methods
        void addPerson()
        {
            cout<<"Enter ID : ";cin>>id;
            cout<<"Enter Name : ";cin>>name;
            cout<<"Enter Gender : ";cin>>gender;
            cout<<"Enter Height : ";cin>>height;
            cout<<"Enter Weight : ";cin>>weight;
        }
        void display()
        {
            cout<<setw(12)<<id<<
            setw(12)<<name<<
            setw(12)<<gender<<
            setw(12)<<height<<
            setw(12)<<weight<<endl;
        }
};
void Header()
{
    cout<<left<<setw(12)<<"ID"<<
    setw(12)<<"Name"<<
    setw(12)<<"Gender"<<
    setw(12)<<"Height"<<
    setw(12)<<"Weight"<<endl;
    cout<<"------------------------------------------"<<endl;
}
int main()
{
    // create object of Person class
    Person per;
    per.addPerson();
    Header();
    per.display();
    return 0;
}