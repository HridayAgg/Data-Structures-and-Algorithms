#include<iostream>
using namespace std;

void replacenum(int n){
    if (n==0)
    {
        return;
    }
    replacenum(n/10);
    if (n%10 == 0) cout<<5;
    else cout<<n%10;
}
int main()
{
    int n;
    cin>>n;
    replacenum(n);
    return 0;
}