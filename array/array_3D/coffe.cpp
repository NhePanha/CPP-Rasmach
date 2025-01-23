#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // code[size_of_block][size_of_row][size_of_column]
    int code[20][20][20];
    // name[size_of_block][size_of_row][size_of_column][size_of_string]
    char name[20][20][20][20];
    double qty[20][20][20];
    double price[20][20][20];
    int i,j,k;
    int row,col,block;

    cout<<"Enter Number of Blocks : ";cin >> block;
    cout<<"Enter Number of Row : ";cin >> row;
    cout<<"Enter Number of Column : ";cin >> col;

    for(k=0;k<block;k++)
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                cout<<"========["<<k<<"]["<<i<<"]["<<j<<"]======="<<endl;
                cout<<"Enter Code : ";cin>>code[k][i][j];
                cout<<"Enter Name : ";cin.ignore();cin.getline(name[k][i][j], 20);
                cout<<"Enter Qty  : ";cin>>qty[k][i][j];
                cout<<"Enter Price : ";cin>>price[k][i][j];
            }
        }
    }
    for(k=0;k<block;k++)
    {
        cout<<endl;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                cout<<setw(12)<<code[k][i][j]<<
                setw(12)<<name[k][i][j]<<
                setw(12)<<qty[k][i][j]<<
                setw(12)<<price[k][i][j]<<endl;
            }
        }
    }
    return 0;
}