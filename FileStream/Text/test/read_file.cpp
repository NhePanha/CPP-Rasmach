#include<iostream>
#include <fstream>
#define RED "\033[1;31m"  // Bold Red
#define BLUE "\033[1;34m" // Bold Blue
#define CYAN "\033[1;36m" // Bold Cyan
#define PURPLE "\033[1;35m" // Bold Purple
#define BROWN "\033[1;33m" // Bold Brown
#define GRAY "\033[1;30m" // Bold Gray
using namespace std;
string line;
void Text()
{
    // create file
    fstream db;
    // open file
    db.open("storage.txt",ios::in);
    if(!db.is_open())
    {
        cout<<RED<<"Error opening can't open file"<<endl;
        return;
    }
    // read line by line
    while(getline(db,line))
    {
        cout<<line<<endl;
    }
}
int main()
{
    Text();
    return 0;
}