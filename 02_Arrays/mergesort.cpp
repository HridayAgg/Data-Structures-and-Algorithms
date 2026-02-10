#include<iostream>
using namespace std;
void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
int main()
{
    int a[8]={3,5,7,8};
    int b[4]={1,2,4,6};
    int m=4;
    int n=sizeof(b)/sizeof(int);
    int i=m-1,j=n-1,k=m+n-1;
    // i points towards last element of a
    // j points towards last element of b
    // k points towards last index of a
    while (i>=0 and j>=0){
        //whichever is greater place at k index
        if (a[i]>b[j]){
            a[k--]=a[i--];

        }
        else{
            a[k--]=b[j--];
        }
    }
    //if i elements goes par the 0 while decrement then put all the 
    //existing elements of b array subsequently in the same order9p' gv
    while(j>=0){
        a[k--]=b[j--];
    }
    print(a,8);
    return 0;
}