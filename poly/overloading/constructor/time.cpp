#include <iostream>
using namespace std;
class Time{
    private:
        int seconds;
        int minutes;
        int hours;
    public:
    // overloading constructor
        Time()
        {
            seconds = 0;
            minutes = 0;
            hours = 0;
        }
        Time(int hours,int minutes,int seconds )
        {
            this->seconds = seconds;
            this->minutes = minutes;
            this->hours = hours;
            if(seconds > 60)
            {
                this-> minutes += this->seconds/60;
                this->seconds = this->seconds % 60;
            }
            if(minutes > 60)
            {
                this->hours += this->minutes/60;
                this->minutes = this->minutes % 60;
            }
        }
        void display()
        {
            cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
        }
};
int main()
{
    Time t1(0, 70, 5000);
    t1.display();
    return 0;
}