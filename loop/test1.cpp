#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // coffee
    int id;
    string name;
    int qty;
    double price,total;
    int n,i,op;
    do{
        cout<<"1. Add Coffee"<<endl;
        cout<<"2. Display Coffee"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter Your Choice : ";cin>>op;
        switch(op){
            case 1:{
                cout<<"Enter Coffee ID   : ";cin>>id;
                cout<<"Enter Coffee Name : ";cin>>name;
                cout<<"Enter Quantity    : ";cin>>qty;
                cout<<"Enter Price       : ";cin>>price;
                total = qty * price;
                
            }break;
            case 2:{
                //header
                cout<<setw(12)<<"Code"<<
                setw(12)<<"Name"<<
                setw(12)<<"Quantity"<<
                setw(12)<<"Price"<<
                setw(12)<<"Total"<<endl;
                //output
                cout<<setw(12)<<id<<
                setw(12)<<name<<
                setw(12)<<qty<<
                setw(12)<<price<<
                setw(12)<<total<<endl;
                
            }break;
            case 0:
                break;
            default:
                cout<<"Invalid Choice"<<endl;
        }
    }while(op!=0);
    return 0;
}
