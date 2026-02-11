#include<iostream>
using namespace std;

int strtoint(char a[],int n){
    if (n==0){
        return 0;
    }
    int digit = a[n-1]-'0';
    return strtoint(a,n-1)*10+digit;
}
int main()
{
    char a[]="1234";
    cout<<strtoint(a,strlen(a))+10;
    return 0;
}
