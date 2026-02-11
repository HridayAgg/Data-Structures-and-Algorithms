#include<iostream>
using namespace std;

int main()
{
    char a[100];
    int n;
    cin>>n;
    cin.ignore();
    cin.getline(a,100);

    cout<<n<<endl;
    cout<<a;
    return 0;
}