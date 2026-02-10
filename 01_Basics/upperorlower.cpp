#include<iostream>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    int chr = ch;
    if (ch>='A' and chr<='Z'){
        cout<<"UPPER";
    }
    else if (chr>=97 and chr<=122){
        cout<<"LOWER";
    }
    return 0;
}