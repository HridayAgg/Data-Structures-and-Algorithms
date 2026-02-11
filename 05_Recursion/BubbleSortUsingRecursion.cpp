#include<iostream>
using namespace std;

void bubblesort(int a[],int n,int i,int j){

        if (i==n-1){
            return;
        }
        if (j<n-i-1){
            if (a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
        bubblesort(a,n,i,j+1);}
        else{
            bubblesort(a,n,i,0);
            
        }
        bubblesort(a,n,i+1,0);

    }


int main()
{
    int a[]={5,4,3,2,1};
    bubblesort(a,5,0,0);
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i];
    }
    
    return 0;
}