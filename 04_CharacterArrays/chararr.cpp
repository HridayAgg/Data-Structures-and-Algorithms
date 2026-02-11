#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cin>>str; // It will stop to read whne space will come in bw
    for (int i = 0; str[i]!='\0'; i++)
    {
            cout<<str[i]<<"_";

    }
    
    return 0;
}