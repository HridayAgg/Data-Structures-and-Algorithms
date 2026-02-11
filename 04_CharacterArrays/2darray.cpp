#include<iostream>
using namespace std;

int main()
{
    int a[100][100];
    int b[][3]={
        {1,2,3},
        {4,5},
        {7,8,9}};
    int d[][3]={
        {'a','b'},
        {'c','d'},
        {'e','f'}};
    cout<<d[0];
    int r,c,n;

    // cin>>r>>c;
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cin>>n;
    //         a[i][j]=n;
    //     }
        
    // }
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cout<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<b[i][j];
    //     }
    //     cout<<endl;
    // }
    
    
    return 0;
}