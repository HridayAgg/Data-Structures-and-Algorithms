#include<iostream>
using namespace std;
void oddnum(int n){
    if (n<=0){
        return;
    }
    if (n%2==0) oddnum(n-1);
    else oddnum(n-2);
    cout<<n;
}
void evennum(int n){
    if (n==0){
        return;
    }
    if (n%2!=0) evennum(n-1);
    else evennum(n-2);
    cout<<n;
}
void printallnums(int n){
    oddnum(n);
    evennum(n);
}
int main()
{
    int n;
    cin>>n;
    printallnums(n);
    return 0;
}