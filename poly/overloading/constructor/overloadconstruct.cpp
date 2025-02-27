#include <iostream>
using namespace std;
class Test{
    private:
        int height;
        int width;
    public:
    // overloading constructor
        Test()
        {
            height = 0;
            width = 0;
        }
        Test(int h, int w)
        {
            this->height = h;
            this->width = w;
        }
        int area()
        {
            return height * width;
        }
        void display()
        {
            cout<<"Area : "<<area()<<endl;
        }
};
int main() {
    Test t1(5, 10);
    Test t2(10, 20);
    t1.display();
    t2.display();
    return 0;
}