#include<iostream>
using namespace std;
void binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if (key>arr[mid]){
            s=mid+1;
        }
        if (key<arr[mid]){
            e=mid-1;
        }
        if (arr[mid]==key){
            cout<<"Key found at "<<mid;
            break;
        }

    }
    
    
}
void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }   
}
int main()
{
    int arr[5]={1,2,3,4,5};
    binarysearch(arr,5,3);
    return 0;
}