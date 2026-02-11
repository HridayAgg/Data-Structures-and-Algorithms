// # WAY 1

#include<iostream>
using namespace std;


bool isSorted1(int *arr,int n){
    
    if (n==0 or n==1) return true;
    if (arr[0]<=arr[1] and isSorted1(arr+1,n-1)) return true;
    return false;
}
bool isSorted2(int *arr,int n,int i){

    if (i==n-1) return true;
    if (arr[i]<=arr[i+1] and isSorted2(arr,n,i+1)) return true;
    return false;
}

int main()
{
    int arr[5]={1,2,2,4,5};
    isSorted1(arr,5)?cout<<"True"<<endl:cout<<"False"<<endl;
    isSorted2(arr,5,0)?cout<<"True":cout<<"False";

     
    return 0;
}

