#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(string &str){
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        switch (ch)
        {
        case '[':
        case '{':
        case '(':
            s.push(ch);
            break;
        
        case '}':
            if (!s.empty() and s.top()=='{')
            {
                s.pop();
                break;
            }
            else return false;
        case ']':
            if (!s.empty() and s.top()=='[')
            {
                s.pop();
                break;
            }
            else return false;
        case ')':
            if (!s.empty() and s.top()=='(')
            {
                s.pop();
                break;
            }
            else return false;
            
        }
    }
    return true;
    
}
int main()
{
    string s;
    s = "a+(b+[c+d+{e+{f+g+h}+n]+p)";
    // getline(cin,s);
    if (isBalanced(s)){
        cout<<"Yes, it is balanced";
        
    }
    else{
        cout<<"No, it isn't balanced";

    }
    
    return 0;
}