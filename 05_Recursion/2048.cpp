#include<iostream>
using namespace std;
string keys[100]={
    "zero","one","two","three","four","five","six",
    "seven","eight","nine"
};
void inttostr(int d){
    if (d==0)
    {
        return;
    }
    
    int ld = d%10;
    inttostr(d/10);
    cout<<keys[ld]<<" ";
}
int main()
{
    int n;
    cin>>n;
    inttostr(n);
    return 0;
}