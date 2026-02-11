#include<iostream>
using namespace std;
int total=0;
void printarr(string str,int n,int s,int e){
    if (e==n) return;
    for (int i = s; i <= e; i++)
    {
        cout<<str[i];
    }
    total++;
    cout<<" ";
    printarr(str,n,s,e+1);
}
void allarr(string str,int n,int s){
    if (s==n) return;
    
    printarr(str,n,s,s);
    allarr(str,n,s+1);
}
int main()
{
    string str;
    cin>>str;
    allarr(str,str.length(),0);
    cout<<total;
    return 0;
}