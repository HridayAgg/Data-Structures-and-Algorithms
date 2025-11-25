#include<iostream>
using namespace std;

int main()
{
    char dir;
    cin>>dir;
    int e=0;
    int n=0;

    // Making directions to coordinates
    while (dir!='\n')
    {
        if (dir=='N'){
            n++;
        }
        else if (dir=='S'){
            n--;
        }
        else if (dir=='E'){
            e++;
        }
        else if (dir=='W'){
            e--;
        }
        dir = cin.get();
    }
    // cout<<n<<e; ->coordinates print

    //Converting coordinates to directions
    while (e>0)
    {
        cout<<'E';
        e--;
    }
    while (n>0)
    {
        cout<<'N';
        n--;
    }
    while (n<0)
    {
        cout<<'S';
        n++;
    }
    while (e<0)
    {
        cout<<'W';
        e++;
    }
    
    
    
    return 0;
}