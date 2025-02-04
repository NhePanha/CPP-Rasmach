#include <iostream>
#include <iomanip>
using namespace std;
// create structure
struct Coffee{
    int id;
    string name;
    string description;
    double price;
    int qty;
};

int main() {
    // create object of Coffee structure
    // local objects
    struct Coffee cf;
    // access member variables
    cout<<"Enter ID : ";cin>>cf.id;
    cout<<"Enter Name : ";cin>>cf.name;
    cout<<"Enter Description : ";cin.ignore();getline(cin,cf.description);
    cout<<"Enter Quantity : ";cin>>cf.qty;
    cout<<"Enter Price : ";cin>>cf.price;

    double total = cf.price * cf.qty;

    cout<<left<<setw(12)<<cf.id<<
    setw(12)<<cf.name<<
    setw(25)<<cf.description<<
    setw(12)<<cf.qty<<
    setw(12)<<cf.price<<
    setw(12)<<total<<endl;
    return 0;
}