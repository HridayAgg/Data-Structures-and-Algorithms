#include<iostream>
using namespace std;
bool isPrime(int n){

    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return false;
        }
        
    }
    return true;
    

}
int printAllPrimes(int n){
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i)){
            cout<<i<<" ";
        }
    }
    
}
int main()
{
    if (isPrime(12)==true)
    {
        cout<<"Prime num";
    }
    else{
        cout<<"Not prime num";
    }
    cout<<endl;
    printAllPrimes(100);
    return 0;
}