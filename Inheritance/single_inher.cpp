#include <iostream>
using namespace std;
class A{
    protected:
        int a;
        int b;
};
class B: public A{
    private:
        int c;
    public:
        void Input()
        {
            cout<<"Enter A : ";cin>>a;
            cout<<"Enter B : ";cin>>b;
            cout<<"Enter C : ";cin>>c;
        }
        void Output()
        {
            cout<<"A : "<<a<<endl;
            cout<<"B : "<<b<<endl;
            cout<<"C : "<<c<<endl;
        }  
};
int main()
{
    B obj;
    obj.Input();
    obj.Output();

    return 0;
}