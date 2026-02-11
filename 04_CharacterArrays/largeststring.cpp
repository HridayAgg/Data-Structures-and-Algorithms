#include<iostream>
using namespace std;

int main()
{
    int n,max=INT_MIN;
    char maxarr[100];
    cin>>n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        char arr[100];
        cin.getline(arr,100);
        int a=strlen(arr);
        if (a>max){
            max=a;
            for (int i = 0; i < a; i++)
            {
                maxarr[i]=arr[i];
                        }
             
        }
        
    }
    cout<<maxarr;
    return 0;
}