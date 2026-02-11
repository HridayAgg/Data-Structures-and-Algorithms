#include<iostream>
using namespace std;

string replacepi(string str,int s){
    if (str[s]=='\0'){
        return str;
    }
    if (str[s]=='p' and str[s+1]=='i'){
        s++;
        cout<<3.14;
        return replacepi(str,s+1);
    }
    else{
        cout<<str[s];
    return replacepi(str,s+1);
}
}
int main()
{
    string num;
    int n;
    cin>>n;
    int *num = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>num[i];
        
    }
    for (int i = 0; i < n; i++)
    {
        replacepi(num,0);
        
    }
    
    
    return 0;
}
