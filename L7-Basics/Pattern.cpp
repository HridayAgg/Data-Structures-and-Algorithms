#include<iostream>
using namespace std;

int main()
{
    int n,x=1;
    cin>>n;
    for (int i = 0; i < n; i++)mnbv 
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<x<<" ";
            x=1-x;
        }
        x=i%2;
        cout<<endl;
    }
    
    return 0;
}