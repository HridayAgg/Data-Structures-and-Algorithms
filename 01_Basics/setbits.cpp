#include<iostream>
using namespace std;

int main()
{
    int n;
    int cnt=0;
    cin>>n;
    while (n>0){
        if ((n)&1){// Any bit & 1 will always return the bit
            cnt++;
        }
        n=n>>1;//shifts N to the right to & with 1 which always return 
                //the given bit
    }
    cout<<cnt;
    return 0;
}