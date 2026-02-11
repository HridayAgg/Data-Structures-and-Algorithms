#include<iostream>
using namespace std;

int firstindex(int arr[],int n,int s,int target){
    if (s==n)
    {
        return -1;
    }
    if (arr[s]==target)
    {
        return s;
    }
    return firstindex(arr,n,s+1,target);
    
}

int main()
{
    int n,targe;
    cin>>n; 
    int *arr = new int[n];  
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>targe;
    int a = firstindex(arr,n,0,targe);
    cout<<a;
    return 0;
}