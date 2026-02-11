#include<iostream>
using namespace std;

bool contains(int a[],int n){
    // if (i==n-1) return false;
    // if (a[i] == 7) return true;
    
    if (n==0) return false;
    if (a[0] == 7) return true;
    return contains(a+1,n-1);
}
int first(int a[],int n,int i){
    if (i==n-1) return 0;
    if (a[i]==7) return i;
    return first(a,n,i+1);
}
int end(int a[],int n){
    if (n==-1) return 0;
    if (a[n]==7) return n;
    return end(a,n-1);
}
int all(int a[],int n,int i){
    if (i==n) return 0;
    if (a[i]==7) cout<<i<<" ";
    return all(a,n,i+1);
}
int main() 
{
    int a[]={1,7,2,7,7};
    cout<<contains(a,5)<<endl;
    cout<<first(a,5,0)<<endl;
    cout<<end(a,5)<<endl;
    cout<<all(a,5,0);
    return 0;
}