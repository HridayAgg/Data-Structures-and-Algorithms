#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char c ='A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<<c<<' ';
            c++;
        }
        for (int j = 0; j < n-i; j++)
        {
            c--;
            cout<<c<<' ';
        }
        cout<<endl;
        
    }
    
    return 0;
}