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
        Coffee()
        {
            id = 0;
            name = "N/A";
            description = "N/A";
            price = 0;
            qty = 0;
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
    return 0;
}