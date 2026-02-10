#include<iostream>
#include<climits>
using namespace std;
int summ=0;
void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
        summ += arr[i];
    }
    
    cout<<endl<<summ;
    
}
void selectionSort(int arr[],int n){
    int mi=0;
    for (int i = 0; i < n; i++)
    {
        mi=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[mi]>arr[j]){
                mi=j;
            }
            swap(arr[mi],arr[i]);
        }
        
    }
    print(arr,n);
    
}
int main()
{
    int a[5]={4,2,3,1,5};
    int n = sizeof(a)/sizeof(int);
    selectionSort(a,5);
    return 0;
}