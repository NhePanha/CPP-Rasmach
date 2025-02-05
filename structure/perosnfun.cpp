#include <iostream>
#include <iomanip>
using namespace std;
// create structures
struct Person{
    int id;
    string name,gender;
    double height, weight;
    int age;
}per; // global object of structure
void addPerson()
{
    cout<<"Enter Person ID : ";cin>>per.id;
    cout<<"Enter Person Name : ";cin.ignore();getline(cin,per.name);
    cout<<"Enter Person Age : ";cin>>per.age;
    cout<<"Enter Person Gender (Male/Female) : ";cin>>per.gender;
    cout<<"Enter Person Height (in meters) : ";cin>>per.height;
    cout<<"Enter Person Weight (in kg) : ";cin>>per.weight;
}

void DisplayPerson()
{
    // display
    cout<<setw(12)<<per.id<<
    setw(12)<<per.name<<
    setw(12)<<per.age<<
    setw(12)<<per.gender<<
    setw(12)<<per.height<<
    setw(12)<<per.weight<<endl;
}
void Header()
{
    // header
    cout<<setw(12)<<"ID"<<
    setw(12)<<"Name"<<
    setw(12)<<"Age"<<
    setw(12)<<"Gender"<<
    setw(12)<<"Height"<<
    setw(12)<<"Weight"<<endl;
    cout<<"----------------------------------------------------------------------------------------"<<endl;
}
int main()
{
    addPerson();
    Header();
    DisplayPerson();
    return 0;
}