#include <iostream>
using namespace std;
int main(){
    // arr[size_of_row][size_of_col]
    int arr[100][100];
    int row,col;
    int i,j;

    cout<<"Enter Number OF rows : ";cin>>row;
    cout<<"Enter Number Of Columns : ";cin>>col;

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"Enter Number of array : ";cin>>arr[i][j];
        }
    }

    for(i=0;i<row;i++)
    {
        cout<<endl;
        for(j=0;j<col;j++)
        {
            cout<<" "<<arr[i][j];
        }
        
    }



    return 0;
}