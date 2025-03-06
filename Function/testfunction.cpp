// + None return Function
//     - None parameter
//         syntax:
//             void Function_name()
//             {
//                 // Function Body
//             }
//     - Has parameter
//         syntax:
//             void Function_name(parameter1, parameter2,...)
//             {
//                 // Function Body
//             }
// + return Function 
//     - None parameter 
//         syntax:
//         int Function_name()
//         {
//             // Function Body
//             return result;
//         }
//         char * Function_name()
//         {
//             // Function Body
//             return "result";
//         }
//         double Function_name()
//         {
//             // Function Body
//             return result;
//         }
//         float Function_name()
//         {
//             // Function Body
//             return result;
//         }
//     - Has parameter
//         syntax:
//         int Function_name(parameter1, parameter2,...)
//         {
//             // Function Body
//             return result;
//         }
//         char * Function_name(parameter1, parameter2,...)
//         {
//             // Function Body
//             return "result";
//         }
//         double Function_name(parameter1, parameter2,...)
//         {
//             // Function Body
//             return result;
//         }
//         float Function_name(parameter1, parameter2,...)
//         {
//             // Function Body
//             return result;
//         }

// #include <iostream>
// using namespace std;
// // global variables
// int a,b;
// // note systax 1
// void Myfunction()
// {
//     // local variables
//     cout<<"Hello World!"<<endl;
// }
// void Myfunction1()
// {
//     cout<<"enter value a : ";cin>>a;
// }
// int main()
// {

//     // calling function
//     Myfunction1();
//     cout<<"enter value a : ";cin>>a;
//     // calling function
//     Myfunction();
//     return 0;
// }

#include <iostream>
#include <iomanip>
using namespace std;
// global variables
int code;
double KHR;
string name,size;
double price,dis,payment,qty,total,tax;
void AddProduct()
{
    cout<<"================[Add Product]===================\n";
    cout<<"Enter Code  : ";cin>>code;
    cout<<"Enter Name  : ";cin.ignore();getline(cin,name);
    cout<<"Enter Price : ";cin>>price;
    cout<<"Enter Qty   : ";cin>>qty;

    total = price * qty;
    dis = total * 0.1;
    tax = total * 0.05;
    payment = total + tax- dis;
}
void PayKHR()
{
    KHR = payment * 4100;
}
void Header()
{
    cout<<"================[Product List]===================\n";
    cout<<setw(12)<<"Code"<<
    setw(12)<<"Name"<<
    setw(12)<<"Price"<<
    setw(12)<<"Quantity"<<
    setw(12)<<"Total"<<
    setw(12)<<"Discount"<<
    setw(12)<<"Tax"<<
    setw(12)<<"Payment"<<endl;
}
void Display()
{
    cout<<setw(12)<<code<<
    setw(12)<<name<<
    setw(12)<<price<<
    setw(12)<<qty<<
    setw(12)<<total<<
    setw(12)<<dis<<
    setw(12)<<tax<<
    setw(12)<<payment<<endl;
}
int main()
{
    // local variables
    int op;
    do{
        cout<<"=============[MENU PRODUCTS]========================="<<endl;
        cout<<"[1. Add Product]"<<endl;
        cout<<"[2. Display    ]"<<endl;
        cout<<"[3. Pay Dollar ]"<<endl;
        cout<<"[4. Pay KHR    ]"<<endl;
        cout<<"Enter your choice : ";cin>>op;
        switch(op){
            case 1:{
                // calling function
                AddProduct();
            }break;
            case 2:{
                // calling function
                Header();
                Display();
            }break;
            case 3:{
                cout<<"Payment in Dollar = "<<payment<<endl;
            }break;
            case 4:{
                PayKHR();
                cout<<"Payment in KHR = "<<KHR<<"  KHR"<<endl;
            }break;
            default: cout<<"Invalid Option!"<<endl;
        }
    }while(op!=0);
    return 0;
}
