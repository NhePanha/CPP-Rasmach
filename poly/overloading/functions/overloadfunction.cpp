#include <iostream>
using namespace std;
class Areas{
    private:
        int length;
        int breadth;
        int height;
        double area;
    public:
        // overloading functions
        void Area(int l)
        {
            length = l;
            cout<<"Length: "<<length<<endl;
        }
        void Area(int l, int b)
        {
            length = l;
            breadth = b;
            cout<<"Length: "<<length<<", Breadth: "<<breadth<<endl;
        }
        void Area(int l, int b, int h)
        {
            length = l;
            breadth = b;
            height = h;
            cout<<"Length: "<<length<<", Breadth: "<<breadth<<", Height: "<<height<<endl;
            area = 0.5 * length * breadth * height;
            cout<<"Volume: "<<area<<endl;
        }
};
int main()
{
    Areas a1,a2,a3;
    a1.Area(5);
    a2.Area(5, 10);
    a3.Area(5, 10, 15);

    return 0;
}