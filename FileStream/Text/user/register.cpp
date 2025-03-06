#include <iostream>
#include <fstream>
using namespace std;
// add colors
#define RED "\033[1;31m"  // Bold Red
#define BLUE "\033[1;34m" // Bold Blue
#define CYAN "\033[1;36m" // Bold Cyan
#define PURPLE "\033[1;35m" // Bold Purple
#define BROWN "\033[1;33m" // Bold Brown
#define GRAY "\033[1;30m" // Bold Gray

char username[100],email[100],password[100],confirm[100];
// create file
fstream storage;
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
    while(storage>>stored_username>>stored_email>>stored_password)
    {
        if(strcmp(stored_email,new_email)==0 && strcmp(stored_password,new_password)==0)
        {
            cout<<CYAN<<"Sign In Successfully!"<<endl;
            break;
        }
        else
        {
            cout<<RED<<"Email or Password is incorrect!!"<<endl;
        }
    }
}
int main()
{
    SignUp();
    SignIn();
    return 0;
}
