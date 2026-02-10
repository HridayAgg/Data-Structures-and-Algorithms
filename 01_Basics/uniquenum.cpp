#include<iostream>
using namespace std;

int main()
{
    int n,i,ans=0;
    cin>>i;
    while(i>0){
        cin>>n;
        ans=n^ans;
        i--;
    }
    cout<<ans;

    
    return 0;
}