#include <iostream>
using namespace std;
class Abstraction{
    public:
        virtual void Massege() = 0;
};
class Messages:public Abstraction{
    public: 
    // override methods
        void Massege(){
            cout<<"Hello World!";
        }
};
int main(){
    Messages msg;
    msg.Massege();
    return 0;
}