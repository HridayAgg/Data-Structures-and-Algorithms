#include <iostream>
using namespace std;

int main()
{
    int n,i=0,num,max=INT_MIN;
    cin>>n;
    while(i<n){
        cin>>num;
        if(num>max){
            max = num;
        }
        i++;
    }
    cout<<max;
    return 0;
}