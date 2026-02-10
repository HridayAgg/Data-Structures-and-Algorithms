#include<iostream>
using namespace std;

int main()
{
    char ch='E';
    switch (ch)
    {
    case 'N':
        cout<<"N";
        break;
    case 'E':
        cout<<"E";
        break;
    case 'W':
        cout<<"W";
        break;
    case 'S':
        cout<<"S";
        break;
    default:
        cout<<"Invalid";
        break;
    }
    return 0;
}