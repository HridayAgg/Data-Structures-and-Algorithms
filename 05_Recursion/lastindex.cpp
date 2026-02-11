#include<iostream>
using namespace std;
int lastindex(int *arr,int f,int index,int n,int pos=-1){
    if (index==n-1) return -1;
    if (arr[index]==f) return index;
    return lastindex(arr,f,index+1,n); 
}
int main()
{
    int n,f;
    cin>>n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>f;
    int a = lastindex(arr,f,0,n);
    cout<<a;
    return 0;
}