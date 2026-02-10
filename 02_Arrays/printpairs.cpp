#include<iostream>
using namespace std;
void printpairs(int arr[],int n,int target){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]+arr[j]==target){
                cout<<arr[i]<<","<<arr[j]<<endl;
            }
        }
        
    } 
    
}
int main()
{
    int a[6]={1,0,2,4,5,3};
    printpairs(a,6,5);
    return 0;
}