#include<iostream>
using namespace std;

void reverseString(char str[]){
    
    int i=0;
    int j=strlen(str)-1;
    while (i<j)
    {
        swap(str[i],str[j]);
        i++;
        j--;
    }
}

int main()
{
    char str[]="okhai";
    reverseString(str);
    cout<<str;
    
    return 0;
}