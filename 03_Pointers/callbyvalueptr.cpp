#include<iostream>
using namespace std;
void update(int *c){
    *c=*c+1;
}
void print(int *a,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<*(a+i);
    }
    
}
int main()
{
    // int a=10;
    // int *b=&a;
    // int *c=b;
    

    int arr[5]={1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        cout<<*(arr+i);
    }
    print(arr,5);

    // update(b);
    // cout<<a;
    return 0;
}