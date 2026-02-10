#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,5,4,2,3};
    int n=sizeof(arr)/sizeof(int);
    for (int i = 0; i < n-1; i++)
    {
        bool swaphua=false;
        for (int j = i; j <= n-2; j++)
        {
            if (arr[j]>arr[j+1]){
                swaphua=true;
                swap(arr[j],arr[j+1]);
            }
        }
        
        if (swaphua==false){
            break;
        }
    }
     for (int k = 0; k < n; k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}