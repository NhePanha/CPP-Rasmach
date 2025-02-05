#include <iostream>
#include <iomanip>
using namespace std;
struct Coffe{
    int i;
    int id[100];
    string name[100];
    double price[100];
    int qty[100];
    double total_items[100];
}cof;
void AddProduct()
{
    cout<<"Enter Product Code     : ";cin>>cof.id[cof.i];
    cout<<"Enter Product Name     : ";cin>>cof.name[cof.i];
    cout<<"Enter Product Quantity : ";cin>>cof.qty[cof.i];
    cout<<"Enter Product Price    : ";cin>>cof.price[cof.i];
}
void Header()
{
    cout<<left<<setw(12)<<"Code"<<
    setw(12)<<"Name"<<
    setw(12)<<"Quantity"<<
    setw(12)<<"Price"<<
    setw(12)<<"Total"<<endl;
}
double Total()
{
    cof.total_items[cof.i] = cof.qty[cof.i] * cof.price[cof.i];
    return cof.total_items;
}
void Display()
{
    cout<<left<<setw(12)<<cof.id[cof.i]<<
    setw(12)<<cof.name[cof.i]<<
    setw(12)<<cof.qty[cof.i]<<
    setw(12)<<cof.price[cof.i]<<
    setw(12)<<Total()<<endl;
}
int main() {
    int n;
    cout<<"Enter the number of products : ";cin>>n;
    for(cof.i=0; cof.i<n; cof.i++)
    {
        AddProduct();
       
    }
    Header();
    for(cof.i=0; cof.i<n; cof.i++)
    {
        Display();
    }
    return 0;
}