#include <iostream>
#include <iomanip>
#include <regex>
#include <string>
using namespace std;

// global variables
int id_movie[50][50] = {
    {1001,1002,1003,1004,1005}
};
string title[50][50] = {{"title1", "title2", "title3", "title4", "title5"}};
string release[50][50] = {{"27/1/2025", "27/1/2025", "27/1/2025", "27/1/2025","27/1/2025"}};
string two_d[50][50] = {{"2D", "2D", "2D", "2D", "2D"}};
string three_d[50][50] = {{"3D", "3D", "3D", "3d", "3d"}};
double price_2d[50][50]= {{4.5,5,6.5,7.5,8.5,9.5}};
double price_3d[50][50]= {{6.5,7.5,8.5,9.5,10.5,11.5}};
int h[50][50]= {{1,2,3,4,5,6,7}};
int m[50][50]= {{25,55,44,30,50}};
int s[50][50] = {{1,2,3,4,5,6,7}};
int seat[50][50] = {
    {1,2,3,4,5,6,7,8,9},
    {13,14,15,16,17,18,19,20,21},
    {25,26,27,28,29,30,31,32,33},
    {35,36,37,38,39,40,41,42,43},
    {45,46,47,48,49,50,51,52,53},
    {55,56,57,58,59,60,61,62,63},
    {65,66,67,68,69,70,71,72,73},
    {75,76,77,78,79,80,81,82,83},
    };
int i,j,n;
int row,column;
void AddMovie()
{
    cout<<"Enter ID : ";cin>>id_movie[i][j];
    cout<<"Enter Title : ";cin>>title[i][j];
    cout<<"Enter Release Date : ";cin>>release[i][j];
    cout<<"Enter Type (2D/3D) : ";cin>>two_d[i][j];
    cout<<"Enter Price (2D) : ";cin>>price_2d[i][j];
    cout<<"Enter Price (3D) : ";cin>>price_3d[i][j];
    cout<<"Enter Hours : ";cin>>h[i][j];
    cout<<"Enter Minutes : ";cin>>m[i][j];
    cout<<"Enter Seconds : ";cin>>s[i][j];
}
void Header()
{
    cout<<setw(5)<<"ID"
    <<setw(20)<<"Title"
    <<setw(20)<<"Release Date"
    <<setw(10)<<"Type 2D"
    <<setw(10)<<"Type 3D"
    <<setw(10)<<"Price (2D)"
    <<setw(10)<<"Price (3D)"
    <<setw(10)<<"Duration"
    <<endl;
}
void Display(){
    cout<<setw(5)<<id_movie[i][j]
    <<setw(20)<<title[i][j]
    <<setw(20)<<release[i][j]
    <<setw(10)<<two_d[i][j]
    <<setw(10)<<three_d[i][j]
    <<setw(10)<<price_2d[i][j]
    <<setw(10)<<price_3d[i][j]
    <<setw(10)<<h[i][j]<<":"<<m[i][j]<<":"<<s[i][j]<<endl;
}
int main()
{
    int op;
    do{
        cout<<"=============[MENU MOVIE]========================="<<endl;
        cout<<"[1. Add Movie]"<<endl;
        cout<<"[2. Display]"<<endl;
        cout<<"[3. Check Seat]"<<endl;
        cout<<"Enter your choice : ";cin>>op;
        switch(op)
        {
            case 1:{
                row = i/50;
                column = i%50;
                AddMovie();
                i++;
            }break;
            case 2:{
                Header();
                for(i=0; i<n; i++){
                    row = i/50;
                    column = i%50;
                    Display();
                }
            }break;
            case 3:{
                for(i=0; i<8; i++)
                {
                    cout<<endl;
                    for(j=0;j<9;j++)
                    {
                        cout<<setw(3)<<seat[i][j]<<"   ";
                    }
                }
                cout<<endl;
                cout<<"Enter Row    : ";cin>>row;
                cout<<"Enter Column : ";cin>>column;
                row = row-1;
                column = column-1;
                if(seat[i][j] == 0){
                    cout<<"Seat is Available"<<endl;
                }else{
                    cout<<"Seat is Occupied"<<endl;
                }
            }
        }
    }while(op!=0);
    return 0;
}