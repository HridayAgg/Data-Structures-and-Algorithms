#include<iostream>
using namespace std;

int power(int x,int n){
    if (n==0)
    {
        return 1;
    }
    return x*power(x,n-1);
    
}
int fastpower(int x,int n){
      if (n==0) return 1;
      if (n%2){
          
          return power(x,n/2)*power(x,n/2)*x;
      }
      else{

          return power(x,n/2)*power(x,n/2);
      }
}

int main()
{
    cout<<power(5,2);
    cout<<fastpower(5,3);
    return 0;
}