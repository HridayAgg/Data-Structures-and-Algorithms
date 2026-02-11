#include<iostream>
using namespace std;

int nthtriangle(int n,int s=0){
    if (n==1)
    {
        return 1;
    }
    return n+nthtriangle(n-1);
    
}

int main()
{
    int n;
    cin>>n;
    int ans = nthtriangle(n);
    cout<<ans;
    return 0;
}