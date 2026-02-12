#include<iostream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string s1 = "one";
    string s2 = "two";
    (s1>s2)?cout<<"s1 is greater":cout<<"s2 is greater";
    cout<<s;
    
    return 0;
}