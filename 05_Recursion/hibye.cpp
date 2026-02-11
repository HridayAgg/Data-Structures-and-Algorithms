#include<iostream>
using namespace std;

int count(string a,int n,int cnt){
    if (a[0]=='\0') return cnt;
    if (count(a+1,n) and ( a[0]=='h' and a[1]=='i')) cnt++;
}
void remove(string a,int n,int i){
    if (n==i) return;
    if (a[0]!='h' and a[1]!='i') cout<<a[i];
}
void replace(string a,int n,int i){
    if (n==i) return;
    if (a[0]=='h' and a[1]=='i') cout<<"bye";
        cout<<a[i];
}


int main()
{
    int n;
    string s;
    cin>>n>>s;
    cout<<count(s,n,0);
    remove(s,n,0);
    replace(s,n,0);
    
    return 0;
}