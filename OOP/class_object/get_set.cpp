#include <iostream>
using namespace std;
// create class Product
class Product{
    private:
    // block data members
        int id;
        string name;
        double qty,price;
    public:
    // block methods
    void setId(int id){
        this->id = id;
    }
    void setName(string name){
        this->name = name;
    }
    void setQuantity(double qty){
        this->qty = qty;
    }
    void setPrice(double price){
        this->price = price;
    }
    int getId(){
        return id;
    }
    string getName(){
        return name;
    }
    double getQuantity(){
        return qty;
    }
    double getPrice(){
        return price;
    }
};
int main()
{
    // create object of Product class
    Product pro;
    // access member functions
    pro.setId(101);  // object.properties(parameters)
    pro.setName("Apple");
    pro.setQuantity(5);
    pro.setPrice(1.5);

    // display data
    cout<<"ID: "<<pro.getId()<<endl;
    cout<<"Name: "<<pro.getName()<<endl;
    cout<<"Quantity: "<<pro.getQuantity()<<endl;
    cout<<"Price: "<<pro.getPrice()<<endl;
    return 0;
}