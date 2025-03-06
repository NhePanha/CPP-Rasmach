#include <iostream>
#include <fstream>
// add colors
#define RED "\033[1;31m"  // Bold Red
#define BLUE "\033[1;34m" // Bold Blue
#define CYAN "\033[1;36m" // Bold Cyan
#define PURPLE "\033[1;35m" // Bold Purple
#define BROWN "\033[1;33m" // Bold Brown
#define GRAY "\033[1;30m" // Bold Gray
using namespace std;
// global variables
string text;
void Text()
{
    // create file
    // ofstream  -> write
    // ifstream  -> read
    // fstream   -> read or write
    fstream db;
    db.open("storage.txt",ios::app);
    // check file
    if(!db.is_open())
    {
        cout<<RED<<"Error opening file cat't open file"<<endl;
        return;
    }
    cout<<BLUE<<"Enter your text : ";
    getline(cin,text);
    db<<text<<endl;
    db.close();
    cout<<CYAN<<"Text saved successfully!"<<endl;
}
int main()
{
    Text();
    return 0;
}