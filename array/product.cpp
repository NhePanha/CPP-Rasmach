#include<iostream>
#include<stdbool.h>
#include<iomanip>
#include <string.h>
using namespace std;
int code[100];
string name[100];
int qty[100];
double price[100],total[100],payment[100],discount[100],tax[100];
int i;
void AddProduct()
{
    cout<<"Enter Product Code     : ";cin>>code[i];
    cout<<"Enter Product Name     : ";cin>>name[i];
    cout<<"Enter Product Quantity : ";cin>>qty[i];
    cout<<"Enter Product Price    : ";cin>>price[i];
}
double Total()
{
    total[i] = qty[i] * price[i];
    return total[i];
}
double Discount()
{
    double t = Total();
    return (t >= 1 && t <= 100)? t * 0.1 : 
    (t > 100 && t <= 200)? t * 0.2 :
    (t > 200 && t <= 300)? t * 0.3 :
    (t > 300 && t <= 400)? t * 0.4 : t * 0.5;
}
double Tax()
{
    return Total() * 0.05;
}
double Payment()
{
    return Total() + Tax() - Discount();
}
void Header()
{
    cout<<setw(12)<<"Code"<<
    setw(12)<<"Name"<<
    setw(12)<<"Qty"<<
    setw(12)<<"Price"<<
    setw(12)<<"Total"<<
    setw(12)<<"Discount"<<
    setw(12)<<"Tax"<<
    setw(12)<<"Payment"<<endl;
}
void Display()
{
    cout<<setw(12)<<code[i]<<
    setw(12)<<name[i]<<
    setw(12)<<qty[i]<<
    fixed<<setprecision(2)<<
    setw(12)<<price[i]<<
    setw(12)<<Total()<<
    setw(12)<<Discount()<<
    setw(12)<<Tax()<<
    setw(12)<<Payment()<<endl;
}
int main()
{
    int op;
    int n;
    do{
        cout<<"==============[ M E N U ]==================="<<endl;
        cout<<"[1 - Add Product        ]"<<endl;
        cout<<"[2 - Display Product    ]"<<endl;
        cout<<"[3 - Search Product     ]"<<endl;
        cout<<"[4 - Update Product     ]"<<endl;
        cout<<"[5 - Insert Product     ]"<<endl;
        cout<<"[6 - Delete Product     ]"<<endl;
        cout<<"[7 - Sort Product       ]"<<endl;
        cout<<"[8 - Add Product        ]"<<endl;
        cout<<"[9 - Total Payment      ]"<<endl;
        cout<<"[10- Exit(0)            ]"<<endl;
        cout<<"[Please select one option of products ] : ";cin>>op;
        switch(op)
        {
            case 1:{
                cout<<"Enter Number of Product : ";cin>>n;
                for(i=0;i<n;i++)
                {
                    cout<<"========#00"<<i+1<<"==========="<<endl;
                    AddProduct();
                }
            }break;
            case 2:{
                Header();
                for(i=0;i<n;i++)
                {
                    Display();
                }
            }break;
            case 3:{
                int searchid;
                string searchname;
                int op;
                bool check = false;
                string status;
                do{
                    cout<<"======[ s e r c h b y ]========"<<endl;
                    cout<<"[ 1 - Search ID   ]"<<endl;
                    cout<<"[ 2 - Search Name ]"<<endl;
                    cout<<"plase selected option to search : ";cin>>op;
                    switch(op)
                    {
                        case 1:{
                            cout<<"enter code to search : ";cin>>searchid;
                            for(i=0;i<n;i++)
                            {
                                if(searchid==code[i])
                                {
                                    Header();
                                    Display();
                                    check = true;
                                    cout<<"search found..."<<endl;
                                }
                                if(check==false)
                                {
                                    cout<<"search not found..!!!"<<endl;
                                }
                            }
                        }break;
                        case 2:{
                            cout<<"enter name to search : ";cin>>searchname;
                            for(i=0;i<n;i++)
                            {
                                if(searchname==name[i])
                                {
                                    Header();
                                    Display();
                                    check = true;
                                    cout<<"search found..."<<endl;
                                }
                                if(check==false)
                                {
                                    cout<<"search not found..!!!"<<endl;
                                }
                            }
                        }break;
                    }
                    cout<<"press enter yes to continue or no to exit : ";cin>>status;
                }while(status.compare("yes")==0|| status.compare("YES")==0);
            }break;
            case 4:{
                int updatecode;
                string updatename;
                int op;
                string status;
                bool check = false; // check value true or false
                // int check = 0; // note 0 -> false or 1 -> true
                do{
                    cout<<"====[Update BY ]========"<<endl;
                    cout<<"[1 - Update BY ID  ]"<<endl;
                    cout<<"[2 - Update BY Name]"<<endl;
                    cout<<"[Please select one option] : ";cin>>op;
                    switch(op)
                    {
                        case 1:{
                            cout<<"Enter Code to Update : ";cin>>updatecode;
                            for(i=0;i<n;i++)
                            {
                                if(code[i]==updatecode)
                                {
                                    AddProduct();
                                    check = true;
                                    cout<<"Update Successfully..."<<endl;
                                    break;
                                }
                                if(check==false)
                                {
                                    cout<<"Search not found!!"<<endl;
                                }
                            }
                        }break;
                        case 2:{
                            cout<<"Enter Name to Update : ";cin>>updatename;
                            for(i=0;i<n;i++)
                            {
                                if(name[i]==updatename)
                                {
                                    AddProduct();
                                    check = true;
                                    cout<<"Update Successfully..."<<endl;
                                    break;
                                }
                                if(check==false)
                                {
                                    cout<<"Search not found!!"<<endl;
                                }
                            }
                        }break;
                    }
                    cout<<"press Yes/yes to continue but press no to exit : ";cin>>status;
                }while(status=="Yes" || status=="yes");
            }break;
            case 5:{
                int insertcode;
                bool check = false;
                cout<<"Enter code ot insert : ";cin>>insertcode;
                for(i=0;i<n;i++)
                {
                    if(code[i]==insertcode)
                    {
                        for(int j = n ; j>= i ; j--)
                        {
                            code[j] = code[j-1];
                            name[j] = name[j-1];
                            qty[j] = qty[j-1];
                            price[j] = price[j-1];
                            total[j] = total[j-1];
                            tax[j] = tax[j-1];
                            discount[j] = discount[j-1];
                            payment[j] = payment[j-1];
                        }
                        n++;
                        AddProduct();
                        check = true;
                        cout<<"Insert Successfully..."<<endl;
                        break;
                    }
                }
                if(check == false)
                {
                    cout<<"code not found to insert..."<<endl;
                }
            }break;
            case 6:{
                int deletecode;
                bool check = false;
                cout<<"Enter code to delete : ";cin>>deletecode;
                for(int i=0; i<n; i++){
                    if(code[i]==deletecode){
                        for(int j = i ; j < n-1 ; j++){
                            code[j] = code[j+1];
                            name[j] = name[j+1];
                            qty[j] = qty[j+1];
                            price[j] = price[j+1];
                            total[j] = total[j+1];
                            tax[j] = tax[j+1];
                            discount[j] = discount[j+1];
                            payment[j] = payment[j+1];
                        }
                        n--;
                        check = true;
                        cout<<"Delete Successfully..."<<endl;
                        break;
                    }
                }
                if(check == false)
                {
                    cout<<"code not found to delete..."<<endl;
                }
            }break;
            case 7:{
                bool check = false;
                for(i=0;i<n;i++)
                {
                    for(int j=i+1;j<n;j++)
                    {
                        if(code[i]>code[j])
                        {
                            swap(code[i],code[j]);
                            swap(name[i],name[j]);
                            swap(qty[i],qty[j]);
                            swap(price[i],price[j]);
                            swap(total[i],total[j]);
                            swap(tax[i],tax[j]);
                            swap(discount[i],discount[j]);
                            swap(payment[i],payment[j]);
                            check = true;
                        }
                    }
                }
                if(check==false)
                {
                    cout<<"Sorting not success..!!"<<endl;
                }
                else
                {
                    cout<<"Sorting successfully...!"<<endl;
                }
            }break;
            case 8:{
                bool check = false;
                int add;
                cout<<"Enter amount to add : ";cin>>add;
                for(i=n;i<n+add;i++)
                {
                    AddProduct();
                }
                n+=add;
                check = true;
                if(check==false)
                {
                    cout<<"Adding product not success..!!"<<endl;
                }
                else
                {
                    cout<<"Adding product successfully...!"<<endl;
                }
            }break;
            case 9:{
                double total_pay;
                for(i=0;i<n;i++)
                {
                    total_pay += payment[i];
                }
                cout<<"__________________________________"<<endl;
                cout<<"Total Payment : "<<total_pay<<" $"<<endl;
                cout<<"          Thank You"<<endl;
            }break;
            case 10:{
                return 0;
                // exit(0);
            }break;
            default: cout<<"Invalid option "<<endl;
        }
    }while(op!=0);
    return 0;
}