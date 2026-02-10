#include<iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        arr[i]=i+1;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}