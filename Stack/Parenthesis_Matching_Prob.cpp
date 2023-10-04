#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    if (s.length() % 2 != 0) {
        return false;
    }
    stack<char> a;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
            a.push(s[i]);
        else {
            if (a.empty())
                return false;
            char top = a.top();
            a.pop();
            if ((top == '[' && s[i] == ']') || (top == '{' && s[i] == '}') || (top == '(' && s[i] == ')'))
                continue;
            else
                return false;
        }
    }
    return a.empty();
}


int main()
{
    string s;
    cin>>s;
    if(check(s)){
        cout<<"It is balanced";
    }else{
        cout<<"It is not balanced";
    }
    

    return 0;
}