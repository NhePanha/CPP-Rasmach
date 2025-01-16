// #include <iostream>
// using namespace std;
// int main()
// {
//     int us_old,us_new;
//     double total;
//     double pay;
//     cout<<"Enter User Old : ";cin>>us_old;
//     cout<<"Enter User New : ";cin>>us_new;

//     total = us_new - us_old;

//     if(total >= 1 && total <= 10)
//     {
//         pay = total * 350;
//     }
//     else if(total >= 11 && total <= 20)
//     {
//         pay = 10 * 350 + (total - 10) * 450;
//     }
//     else if(total >= 21 && total <= 30)
//     {
//         pay = 10 * 350 + 10 * 450 + (total - 20) * 550;
//     }
//     else if(total >= 31 && total <=40)
//     {
//         pay = 10 * 350 + 10 * 450 + 10 * 550 + (total - 30) * 650;
//     }
//     else if(total >= 41 && total <= 50)
//     {
//         pay = 10 * 350 + 10 * 450 + 10 * 550 + 10 * 650 + (total - 40) * 750;
//     }
//     else if(total >= 51 && total <= 60)
//     {
//         pay = 10 * 350 + 10 * 450 + 10 * 550 + 10 * 650 + 10 * 750 + (total - 50) * 850;
//     }
//     else
//     {
//         pay = 10 * 350 + 10 * 450 + 10 * 550 + 10 * 650 + 10 * 750 + 10 * 850 +(total - 60) * 950;
//     }
//     cout<<"[-------PAYMENT---------]"<<endl;
//     cout<<"Total    : "<<total<<"KW"<<endl;
//     cout<<"Payment  :, "<<pay<<"KHR"<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int i,n;
    int sum = 0;
    cout<<"Enter Number : ";cin>>n;

    for(i=0;i<n;i++)
    {
        sum = sum + i;
    }
    cout<<"Sum : "<<sum<<endl;
    return 0;
}