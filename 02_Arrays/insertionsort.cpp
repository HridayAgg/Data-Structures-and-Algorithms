#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,4,5,6,2};
    int hpc;
    int j;
    int n=sizeof(arr)/sizeof(int);
    for (int i = 1; i < n; i++)
    {
        hpc=arr[i];
        for (j = i-1; j>=0 && hpc<arr[j]; j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=hpc;
           
    }
    for (int k = 0; k < n; k++)
    {
        cout<<arr[k]<<" ";
    }
    
    return 0;
}