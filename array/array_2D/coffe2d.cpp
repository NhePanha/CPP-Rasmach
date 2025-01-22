#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int code[100][100];
    char name[100][100][100];   //name[size_of_row][size_of_column][size_of_string]
    double qty[100][100];
    double price[100][100];
    int row,column;
    int i,j;
    cout<<"Enter Number Of Rows : ";cin>>row;
    cout<<"Enter Number Of Columns : ";cin>>column;

    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            cout<<"Enter Code   : ";cin>>code[i][j];
            cout<<"Enter Name   : ";cin.ignore();cin.getline(name[i][j],100);
            cout<<"Enter Price  : ";cin>>price[i][j];
            cout<<"Enter Qty    :";cin>>qty[i][j];
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            cout<<setw(12)<<code[i][j]<<
            setw(12)<<name[i][j]<<
            setw(12)<<price[i][j]<<
            setw(12)<<qty[i][j]<<endl;
        }
    }

    return 0;
}