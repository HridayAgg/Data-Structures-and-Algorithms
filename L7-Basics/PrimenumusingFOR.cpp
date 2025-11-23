#include<iostream>
using namespace std;

int main()
{
    int n;
    bool a=false;
    cin>>n;

        for(int j=2;j<n;j++){
            if (n%j==0){ // diving the num by all nums from 2 to n
                a = true;
                break;..
            }

        }
        //
        if (a==false){
            cout<<"THIS IS A PRIMENUM "<<n;
        }
    return 0;
}