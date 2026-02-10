#include<iostream>
using namespace std;

int main()
{
    int c,step,initial,final;
    
    cin>>step>>initial>>final;
    float f=initial;
    while(f<=final){
        c = (5/9.0)*(f-32) ;
        cout<<f<<'\t'<<c<<'\n';
        f=f+step;
        
    }
    return 0;
}