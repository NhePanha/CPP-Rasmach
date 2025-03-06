#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdbool.h>
#include <string.h>
using namespace std;

#define RESET "\033[0m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN "\033[0;36m"
#define WHITE "\033[0;37m"
#define BROWN "\033[1;33m"
//---------------------------REGISTER---------------------------------

char username[100],email[100],password[100],confirm[100];
// create file
fstream storage;
bool signin = false;
void SignUp(){
    storage.open("storage_user.txt",ios::app);
    // check file
    if(!storage.is_open())
    {
        cout<<RED<<"Error opening file cat't open file"<<endl;
        return;
    }
    cout<<BROWN<<"================================================"<<endl;
    cout<<BLUE<<"Enter your username   : "<<RED;cin>>username;
    cout<<BLUE<<"Enter your email      : "<<RED;cin>>email;
    cout<<BLUE<<"Enter your password   : "<<RED;cin>>password;
    cout<<BLUE<<"Confirm your password : "<<RED;cin>>confirm;
    cout<<BROWN<<"================================================"<<endl;
    // check password
    if(!strcmp(password,confirm)==0)
    {
        cout<<RED<<"Passwords do not match!!"<<endl;
        return;
    }
    // write to file
    storage<<username<<" "<<email<<" "<<password<<endl;
    storage.close();
    cout<<CYAN<<"Sign Up Successfully!"<<endl;
}
void SignIn(){
    storage.open("storage_user.txt",ios::in);
    // check file
    if(!storage.is_open())
    {
        cout<<RED<<"Error opening file cat't open file"<<endl;
        return;
    }
    char stored_username[100],stored_email[100],stored_password[100];
    char new_email[100],new_password[100];
    cout<<BROWN<<"================================================"<<endl;
    cout<<BLUE<<"Enter your email      : "<<RED;cin>>new_email;
    cout<<BLUE<<"Enter your password   : "<<RED;cin>>new_password;
    cout<<BROWN<<"================================================"<<endl;
    cout<<"Email : "<<new_email<<endl;
    cout<<"Password : "<<new_password<<endl;
    // read file 
    while(storage>>stored_username>>stored_email>>stored_password)
    {
        if(strcmp(stored_email,new_email)==0 && strcmp(stored_password,new_password)==0)
        {
            cout<<CYAN<<"Sign In Successfully!"<<endl;
            signin = true;
            break;
        }
        else
        {
            cout<<RED<<"Email or Password is incorrect!!"<<endl;
        }
    }
}
//---------------------------REGISTER---------------------------------
class Hospital{
    protected:
        int room;
        string badroom;
        string categori;
    public:
        void Input()
        {
            cout<<YELLOW<<"==========================================="<<endl;
            cout<<RED<<"Enter Room Number : "<<MAGENTA;cin>>room;
            cout<<RED<<"Enter Badroom     : "<<MAGENTA;cin>>badroom;
            cout<<RED<<"Enter Category    : "<<MAGENTA;cin>>categori;
        }
        void Output()
        {
            cout<<BLUE<<setw(12)<<room<<
            setw(12)<<badroom<<
            setw(12)<<categori;
        }
};
class Person:public Hospital{
    protected:
        string name, gender, age;
    public:
        void Input()
        {
            Hospital::Input();
            cout<<YELLOW<<"==========================================="<<endl;
            cout<<RED<<"Enter Name        : "<<MAGENTA;cin>>name;
            cout<<RED<<"Enter Gender      : "<<MAGENTA;cin>>gender;
            cout<<RED<<"Enter Age         : "<<MAGENTA;cin>>age;
        }
        void Output()
        {
            Hospital::Output();
            cout<<BLUE<<setw(12)<<name<<
            setw(12)<<gender<<
            setw(12)<<age;
        }
};
class Pattern:public Person{
    private:
        int day,month,year;
    public:
        void Input()
        {
            Person::Input();
            cout<<YELLOW<<"==========================================="<<endl;
            cout<<RED<<"Enter Day         : "<<MAGENTA;cin>>day;
            cout<<RED<<"Enter Month       : "<<MAGENTA;cin>>month;
            cout<<RED<<"Enter Year        : "<<MAGENTA;cin>>year;
        }
        void Output()
        {
            Person::Output();
            cout<<BLUE<<setw(12)<<day<<
            setw(12)<<month<<
            setw(12)<<year<<endl;
        }
};
void Header()
{
    cout<<MAGENTA<<setw(12)<<"|  Room"<<
    setw(12)<<"|  Badroom "<<
    setw(12)<<"|  Category"<<
    setw(12)<<"|  Name"<<
    setw(12)<<"|  Gender"<<
    setw(12)<<"|  Age"<<
    setw(12)<<"|  Day"<<
    setw(12)<<"|  Month"<<
    setw(12)<<"|  Year"<<"|"<<endl;
}
int main(){
    Pattern obj;
    // create file
    fstream db;
    int i,n,op;
    do{
        cout<<"===================================="<<endl;
        cout<<RED<<"1. Sign Up"<<endl;
        cout<<RED<<"2. Sign In"<<endl;
        cout<<RED<<"0. Exit"<<endl;
        cout<<RED<<"===================================="<<endl;
        cout<<YELLOW<<"Enter your choice : "<<MAGENTA;cin>>op;
        switch(op){
            case 1:{
                SignUp();
            }break;
            case 2:{
                int op;
                SignIn();
                if(signin){
                    cout<<"================================"<<endl;
                    cout<<RED<<"Welcome "<<username<<endl;
                    cout<<"================================"<<endl;
                    do{
                        cout<<YELLOW<<"==========================================="<<endl;
                        cout<<RED<<"1. Add Record"<<endl;
                        cout<<RED<<"2. Display Records"<<endl;
                        cout<<RED<<"3. Exit"<<endl;
                        cout<<YELLOW<<"Enter your choice : "<<MAGENTA;cin>>op;
                        switch(op){
                            case 1:{
                                db.open("database.txt",ios::app);
                                // check file
                                if(!db.is_open())
                                {
                                    cout<<RED<<"Error opening file cat't open file"<<endl;
                                    return 0;
                                }
                                cout<<BROWN<<"================================================"<<endl;
                                cout<<BLUE<<"Enter Number of Patients : "<<RED;cin>>n;
                                for(i=0; i<n; i++)
                                {
                                    obj.Input();
                                    storage.write(char*)&storage,sizeof(storage);
                                }
                                db.close();
                                cout<<CYAN<<"Data saved successfully!"<<endl;
                            }break;
                            
                        }
                    }while(op!=5);
                }
            }break;
            case 3:{
                cout<<CYAN<<"Exit Successfully!"<<endl;
                return 0;
            }break;
            default:
                cout<<RED<<"Invalid choice!!"<<endl;
        }
    }while(op!=0);
    return 0;
}
