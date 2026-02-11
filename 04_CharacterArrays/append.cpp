#include<iostream>
using namespace std;

int main()
{
    char a[100];
    char b[100];
    cin.getline(a,100);
    cin.getline(b,100);
    int j=0;
    for (int i = strlen(a); i < strlen(a)+strlen(b); i++)   {
        a[i]=b[j++];
    }
    
    cout<<a;
    return 0;
}