#include<iostream>
using namespace std;
void inputArray(char a[],int n,char delimiter='\n'){
    char ch;
        int i=0;

    ch=cin.get();
    while (ch!=delimiter && i<n-1)
    {
        a[i]=ch;
        i++;
        ch=cin.get();
    }
    a[i]='\0';
    cout<<a;
}
int main()
{
    char a[5];
    inputArray(a,5,'\t');
    return 0;
}