#include <iostream>
using namespace std;
// pass by reference
template<typename T>
void Swap(T *a, T *b) {
    T temp = *a;
    *a = *b;
    *b = temp;
    cout << "After swapping: " << "a = " << *a << ", b = " << *b << endl;
}
int main()
{
    int x = 5, y = 10;
    double d1 = 3.5, d2 = 7.2;
    char c1 = 'a', c2 = 'b';
    Swap(&x, &y);
    Swap(&d1, &d2);
    Swap(&c1, &c2);
    cout<<"x = "<<x<<"\t"<<"y = "<<y<<endl;
    cout<<"d1 = "<<d1<<"\t"<<"d2 = "<<d2<<endl;
    cout<<"c1 = "<<c1<<"\t"<<"c2 = "<<c2<<endl;  // Error: Cannot swap characters directly, use ASCII values to swap them.
    return 0;
}