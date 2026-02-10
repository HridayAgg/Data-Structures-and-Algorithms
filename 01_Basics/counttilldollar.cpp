#include<iostream>
using namespace std;

int main()
{
    char ch;
    int cnt=0;
    ch = cin.get();
    while (ch!='$'){
        cnt++;
        ch = cin.get();
    }
    cout<<"Total Characters:"<<cnt;
    return 0;
}