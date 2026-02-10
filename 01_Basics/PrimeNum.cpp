#include<iostream>
using namespace std;

int main()
{
    int num,a=2;
    cin>>num;
    while(a<num){
        if (num%a==0){
            cout<<"NOT A PRIME";
            return 0;
        }
        a++;

    }
    cout<<"PRIME NUM";
    return 0;
}