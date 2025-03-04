#include <iostream>
using namespace std;
template<typename T>
T Sum(T a, T b)
{
    return a + b;
}
int main()
{
    int x1 = 5, y1 = 10;
    double x2 = 3.5, y2 = 7.2;
    string x3 = "Sovan" , y3 = "dara";

    cout << "Sum of integers: " << Sum(x1, y1) << endl;
    cout << "Sum of doubles: " << Sum(x2, y2) << endl;
    cout << "Sum of strings: " << Sum(x3, y3) << endl; // Error: string + string is not defined
    return 0;
}