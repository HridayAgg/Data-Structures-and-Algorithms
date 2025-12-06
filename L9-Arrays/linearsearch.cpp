#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5},ans=-1,key;
    cin>>key;
    int n = sizeof(arr)/sizeof(int);
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key){
            ans=i;
        }
    }
    if (ans==-1) cout<<"Key not found";
    else cout<<"Key found at "<<ans;
    
    return 0;
}