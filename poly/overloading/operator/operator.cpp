#include <iostream>

using namespace std;
class Counter{
    private:
        int counter;
    public:
        Counter()
        {
            counter = 0;
        }
        void increment()
        {
            counter++;
        }
        void decrement()
        {
            counter--;
        }
        int getCounter()
        {
            return counter;
        }
};
int main()
{
    Counter c1, c2;
    c1.increment();
    c1.increment();
    c1.increment();
    c1.increment();
    c1.decrement();
    cout<<"|+|0"<<c1.getCounter()<<"|-|"<<endl;
    return 0;
}