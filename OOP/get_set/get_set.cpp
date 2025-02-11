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
    int id;
    string name;
    double qty, price;
    cout<<"Enter Product ID       : ";cin>>id;
    cout<<"Enter Product Name     : ";cin>>name;
    cout<<"Enter Product Quantity : ";cin>>qty;
    cout<<"Enter Product Price    : ";cin>>price;
    // access member functions
    pro.setId(id);  // object.properties(parameters)
    pro.setName(name);
    pro.setQuantity(qty);
    pro.setPrice(price);

    // display data
    cout<<"__________________________________"<<endl;
    cout<<"ID       : "<<pro.getId()<<endl;
    cout<<"Name     : "<<pro.getName()<<endl;
    cout<<"Quantity : "<<pro.getQuantity()<<endl;
    cout<<"Price    : "<<pro.getPrice()<<endl;
    cout<<"__________________________________"<<endl;
    return 0;
}