#include <iostream>
using namespace std;
template<class T>
class Temp{
    T a,b;
    public:
    Temp(T x,T y)
    {
        a = x;
        b = y;
    }
    void Swap(); // function template declaration
};
template<class T>
// pass by value
void Temp<T>::Swap()
{
    T temp = a;
    a = b;
    b = temp;
    cout<<"After Swapping: a = "<<a<<", b = "<<b<<endl;
}
int main() {
    Temp<int> obj1(10,20);
    Temp<double> obj2(10.5,20.7);
    Temp<float> obj3(10.5,20.7);
    obj1.Swap();
    obj2.Swap();
    obj3.Swap();
    return 0;
}