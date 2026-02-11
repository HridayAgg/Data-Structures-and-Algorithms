#include<iostream>
using namespace std;
int binarysearch(int a[],int s,int e,int key){
    int mid=s+(e-s)/2;
    if (a[mid]==key){
        return mid;
    }
    else if (a[mid]>key){
        return binarysearch(a,s,mid-1,key);
    }
    else {
        return binarysearch(a,mid+1,e,key);
    }
}
int main()
{
    int arr[]={5,4,2,1,3};
    cout<<binarysearch(arr,0,4,3);
    
    return 0;
}