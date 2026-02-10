#include<iostream>
using namespace std;

int main()
{
    int arr[5]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    int mi=0;
    for (int i=0;i<n;i++){
        mi=i;
        for (int j=i+1;j<n;j++){
            if (arr[mi]>arr[j]){
                mi=j;
            }
        }
        swap(arr[mi],arr[i]);
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}