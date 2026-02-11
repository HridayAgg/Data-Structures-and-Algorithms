#include<iostream>
using namespace std;
void reversestr(string &str,int i,int j){
    if (i>=j)
    {
        return;
    }
    
    swap(str[i],str[j]);
    reversestr(str,i+1,j-1);
}
int main()
{
    string s = "hriday";
    reversestr(s,0,s.length()-1);
    cout<<s;
    return 0;
}