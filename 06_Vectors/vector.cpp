#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    cout<<v.capacity();
    v.push_back(2);
    cout<<v.capacity();
    v.push_back(3);
    cout<<v.capacity();
    v.push_back(4);
    cout<<v.capacity();
    v.push_back(5);
    v.pop_back();
    cout<<v.capacity();
    cout<<v.front();
    cout<<v.back();
    return 0;
}