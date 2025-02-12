#include <iostream>
using namespace std;
// create class coffe
class Coffee{
    private:
        // block data members
        int id;
        string name, description;
        double price;
        int qty;
    public:
        // block methods
        // default constructor
        Coffee()
        {
            id = 0;
            name = "N/A";
            description = "N/A";
            price = 0;
            qty = 0;
        }
        // constructor with parameters
        Coffee(int id,string name,string description,double price,int qty)
        {
            this->id = id;
            this->name = name;
            this->description = description;
            this->price = price;
            this->qty = qty;
        }
        void Display()
        {
            cout<<"ID: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Description: "<<description<<endl;
            cout<<"Price: "<<price<<endl;
            cout<<"Quantity: "<<qty<<endl;
        }
};
int main()
{
    // create object of Coffee class
    Coffee cof;
    cof.Display();
    int id;
    string name, description;
    double price;
    int qty;
    cout<<"Enter Product ID       : ";cin>>id;
    cout<<"Enter Product Name     : ";cin>>name;
    cout<<"Enter Product Description: ";cin.ignore();getline(cin,description);
    cout<<"Enter Product Quantity : ";cin>>qty;
    cout<<"Enter Product Price    : ";cin>>price;
    Coffee cof1(id,name,description,price,qty);
    cof1.Display();
    return 0;
}