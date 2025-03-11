#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdbool.h>
#include <string.h>
#include <ctime>
#include <time.h>
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
// -------------------REGISTER--------------------
char username[100], email[100], password[100], confirm[100];
fstream storage;
bool signin = false;

void SignUp() {
    storage.open("storage_us.txt", ios::app);
    if (!storage.is_open()) {
        cout << "Error opening file. Can't open file." << endl;
        return;
    }

    cout <<RED<< "================================================" << endl;
    cout <<BLUE<< "Enter your username   : "; cin >> username;
    cout <<BLUE<< "Enter your email      : "; cin >> email;
    cout <<BLUE<< "Enter your password   : "; cin >> password;
    cout <<BLUE<< "Confirm your password : "; cin >> confirm;
    cout <<RED<< "================================================" << endl;

    // Check if passwords match
    if (strcmp(password, confirm) != 0) {
        cout <<RED<< "Passwords do not match!" << endl;
        storage.close();
        return;
    }

    // Write to file
    storage << username << " " << email << " " << password << endl;
    storage.close();
    cout <<GREEN<< "Sign Up Successfully!" << endl;
}

void SignIn() {
    storage.open("storage_us.txt", ios::in);
    if (!storage.is_open()) {
        cout <<RED<< "Error opening file. Can't open file." << endl;
        return;
    }

    char stored_username[100], stored_email[100], stored_password[100];
    char new_email[100], new_password[100];

    cout <<MAGENTA<< "================================================" << endl;
    cout <<BLUE<< "Enter your email      : "; cin >> new_email;
    cout <<BLUE<< "Enter your password   : "; cin >> new_password;
    cout <<MAGENTA<< "================================================" << endl;

    // Read from file
    while (storage >> stored_username >> stored_email >> stored_password) {
        if (strcmp(stored_email, new_email) == 0 && strcmp(stored_password, new_password) == 0) {
            signin = true;
            strcmp(username,stored_username);
            break;
        }
    }

    storage.close();
    if (signin) {
        cout <<GREEN<< "Sign In Successfully! Welcome, Mr. " << stored_username << endl;
    } else {
        cout <<RED<< "Invalid password or email!" << endl;
    }
}
// -------------------REGISTER--------------------
class Hospital{
    protected:
        int room;
        string badroom;
        string categori;
    public:
        int getRoom()
        {
            return room;
        }
        string getBadroom()
        {
            return badroom;
        }
        string getCategori()
        {
            return categori;
        }
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
    protected:
    int day,month,year;
    time_t t = time(0);  // Get current system time
    tm* now = localtime(&t);
    public:
    void Input()
    {
        Person::Input();
    }
    void ShowDate(struct tm *now) {
        cout << "\t" << setw(2) << (now->tm_mon + 1) << "/"
            << setw(2) << now->tm_mday << "/"
            << (now->tm_year + 1900);
    }

    void ShowTime() {
        time_t t = time(0);
        struct tm *now = localtime(&t);

        Person::Output();
        ShowDate(now);
        cout << "\t" << setw(2) << now->tm_hour << ":"
            << setw(2) << now->tm_min << ":"
            << setw(2) << now->tm_sec << endl;
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
    setw(15)<<"|  Date"<<
    setw(15)<<"|  Time"<<endl;
}
int main(){
    Pattern pattern;
    // create file
    fstream db;
    int i,n,op;
    do{
        cout<<YELLOW<<"==========================================="<<endl;
        cout<<RED<<"[ 1. Sign Up   ]"<<endl;
        cout<<RED<<"[ 2. Sign In   ]"<<endl;
        cout<<RED<<"[ 0. Exit      ]"<<endl;
        cout<<YELLOW<<"==========================================="<<endl;
        cout<<RED<<"Enter your option : "<<MAGENTA;cin>>op;
        switch(op){
            case 1:{
                SignUp();
            }break;
            case 2:{
                SignIn();
                if(signin)
                {
                    int op;
                    do{
                        cout<<YELLOW<<"==========================================="<<endl;
                        cout<<RED<<"[ 1. Add Record    ]"<<endl;
                        cout<<RED<<"[ 2. Show Record   ]"<<endl;
                        cout<<RED<<"[ 3. Search Record ]"<<endl;
                        cout<<RED<<"[ 4. Update Record ]"<<endl;
                        cout<<RED<<"[ 5. Delete Record ]"<<endl;
                        cout<<RED<<"[ 0. Exit          ]"<<endl;
                        cout<<YELLOW<<"==========================================="<<endl;
                        cout<<RED<<"Enter your option : "<<MAGENTA;cin>>op;
                        switch(op)
                        {
                            case 1:{
                                bool check = false;
                                // open file stream
                                db.open("hospital.bin",ios::app | ios::binary);
                                if(!db.is_open())
                                {
                                    cout<<RED<<"Error opening file cat't open file"<<endl;
                                    return 0;
                                }
                                cout<<"Enter Number of Patients : ";cin>>n;
                                for(i=0;i<n;i++)
                                {
                                    pattern.Input();
                                    db.write((char*)&pattern,sizeof(pattern));
                                    check = true;
                                }
                                if(check)
                                {
                                    cout<<GREEN<<"Data has been saved successfully!"<<endl;
                                }
                                else
                                {
                                    cout<<RED<<"Data has not been saved!"<<endl;
                                }
                                db.close();
                            }break;
                            case 2:{
                                // open file stream
                                db.open("hospital.bin",ios::in | ios::binary);
                                if(!db.is_open())
                                {
                                    cout<<RED<<"Error opening file cat't open file"<<endl;
                                    return 0;
                                }
                                Header();
                                while(db.read((char*)&pattern,sizeof(pattern)))
                                {
                                    pattern.ShowTime();
                                }
                                db.close();
                            }break;
                            case 3:
                            {
                                int searchid;
                                bool check = false;
                                cout<<"Enter Room Number to Search : ";cin>>searchid;
                                // open file stream
                                db.open("hospital.bin",ios::in | ios::binary);
                                if(!db.is_open())
                                {
                                    cout<<RED<<"Error opening file cat't open file"<<endl;
                                    return 0;
                                }
                                Header();
                                while(db.read((char*)&pattern,sizeof(pattern)))
                                {
                                    if(searchid == pattern.getRoom())
                                    {
                                        pattern.ShowTime();
                                        check = true;
                                    }
                                }
                                if(!check)
                                {
                                    cout<<RED<<"Record not found!"<<endl;
                                }
                            }break;
                            case 4:{
                                int searchid;
                                bool check = false;
                                cout<<"Enter Room Number to Update : ";cin>>searchid;
                                // open file stream
                                db.open("hospital.bin",ios::in | ios::out | ios::binary);
                                if(!db.is_open())
                                {
                                    cout<<RED<<"Error opening file cat't open file"<<endl;
                                    return 0;
                                }
                                while(db.read((char*)&pattern,sizeof(pattern)))
                                {
                                    if(searchid == pattern.getRoom())
                                    {
                                        pattern.Input();
                                        db.seekp(-sizeof(pattern),ios::cur);
                                        db.write((char*)&pattern,sizeof(pattern));
                                        check = true;
                                    }
                                }
                                if(check)
                                {
                                    cout<<GREEN<<"Record has been updated successfully!"<<endl;
                                }
                                else
                                {
                                    cout<<RED<<"Record not found!"<<endl;
                                }
                                db.close();
                            }break;
                        
                            case 5:{
                                int searchid;
                                bool check = false;
                                cout<<"Enter Room Number to Delete : ";cin>>searchid;
                                // open file stream
                                db.open("hospital.bin",ios::in | ios::binary);
                                if(!db.is_open())
                                {
                                    cout<<RED<<"Error opening file cat't open file"<<endl;
                                    return 0;
                                }
                                fstream temp;
                                temp.open("temp.bin",ios::out | ios::binary);
                                if(!temp.is_open())
                                {
                                    cout<<RED<<"Error opening file cat't open file"<<endl;
                                    return 0;
                                }
                                while(db.read((char*)&pattern,sizeof(pattern)))
                                {
                                    if(searchid != pattern.getRoom())
                                    {
                                        temp.write((char*)&pattern,sizeof(pattern));
                                    }
                                    else
                                    {
                                        check = true;
                                    }
                                }
                                db.close();
                                temp.close();
                                remove("hospital.bin");
                                rename("temp.bin","hospital.bin");
                                if(check)
                                {
                                    cout<<GREEN<<"Record has been deleted successfully!"<<endl;
                                }
                                else
                                {
                                    cout<<RED<<"Record not found!"<<endl;
                                }
                            }break;
                        }
                    }while(op!=0);
                }
            }break;
        }
    }while(op!=0);
    return 0;
}
