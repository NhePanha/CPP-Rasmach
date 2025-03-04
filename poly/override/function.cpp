#include <iostream>
#define RED "\033[1;31m"  // Bold Red
#define BLUE "\033[1;34m" // Bold Blue
#define CYAN "\033[1;36m" // Bold Cyan
#define PURPLE "\033[1;35m" // Bold Purple
#define BROWN "\033[1;33m" // Bold Brown
#define GRAY "\033[1;30m" // Bold Gray
using namespace std;
class Test1{
    public:
        void Message()
        {
            cout<<RED<<"Hello World!"<<endl;
        }
};
class Test2:public Test1{
    public:
        // override methods
        void Message(){
            cout<<BLUE<<"Welcom to etec center"<<endl;
        }
};
class Test3:public Test2{
    public:
        void Message(){
            cout<<CYAN<<"This is a protected method"<<endl;
        }
};
int main()
{
    Test3 obj;
    obj.Message(); // Output: Welcom to etec center
    
    return 0;
}