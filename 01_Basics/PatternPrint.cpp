#include<iostream>
using namespace std;

int main()
{
    int i=1,j=0,n,num=1;
    cin>>n;
    while(i<=n){
        while(j<i){

            cout<<num<<" ";
            j++;
            num++;
        }
        j=0;
        i++;
        cout<<'\n';
    }
    return 0;
}