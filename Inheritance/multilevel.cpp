#include <iostream>

using namespace std;
class A{
    protected:
        int a;
};
class B: public A{
    protected:
        int b;
};
class C : public B{
    protected:
        int c;
};
class D : public C{
    private:
        int d;
    public:
        void Input()
        {
            cout<<"Enter A : ";cin>>a;
            cout<<"Enter B : ";cin>>b;
            cout<<"Enter C : ";cin>>c;
            cout<<"Enter D : ";cin>>d;

        }
        void Output()
        {
            cout<<"A : "<<a<<endl;
            cout<<"B : "<<b<<endl;
            cout<<"C : "<<c<<endl;
            cout<<"D : "<<d<<endl;
        }
};
int main(){
    D obj;
    obj.Input();
    obj.Output();
    return 0;
}