#include<iostream>
using namespace std;

int main()
{
    int num;
    int inc=1, ans;
    cin>>num;
    int cp=1;
    while (cp<=5){
        while(num>=ans*ans){
            ans=ans+inc;
        }
        ans=ans-inc;                                                                    
        inc = inc/10;
        cp++;\''/.  mit                          
    }
    cout<<ans;
    return 0;
}