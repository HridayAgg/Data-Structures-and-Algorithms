#include<iostream>
using namespace std;

int sorted(int a[],int n){
    if (n==1){
        return true;
    }
    if ((a[0]<a[1]) && sorted(a+1,n-1)){
        return true;
    }
        return false;
}
int sorted3(int a[],int n,int i=0){
    if (i==n-1){
        return true;
    }
    if (a[i]<a[i+1] && sorted3(a,n,i+1))
    {
        return true;
    }
    return false;
    
}

int main()
{
    int arr[]={1,4,7,8,9};
    cout<<sorted(arr,5);
    cout<<sorted3(arr,5,0);
    return 0;
}