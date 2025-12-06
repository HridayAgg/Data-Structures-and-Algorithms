#include<iostream>
using namespace std;

int main()
{
    int n,max=INT_MIN;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        (max<arr[i])? max=arr[i]:;
    }
    cout<<"Largest number is "<<max;
    
    
    return 0;
}