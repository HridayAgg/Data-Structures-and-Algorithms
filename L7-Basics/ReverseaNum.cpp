#include<iostream>
using namespace std;

int main()
{   
    int n,d,ans=0;
    
    for(cin>>n;n>0;n/=10){
        d = n%10; // last digit nikal ne ke liye 
        ans = ans*10+d; // main ans me plus karke har baar * 10 kar rha hoon taki next digit par shift
                        // hota rhe 
    }
    cout<<ans;
    return 0;
}