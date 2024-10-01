#include <bits/stdc++.h>
#include <stack>
using namespace std;

// LIFO
// ()()()()()
// (((())))
// ((())

// Leetcode: parentheses checking, stack

int main(int argc, char const *argv[])
{
    string s; cin >> s;
    stack <char> st;
    for(char x : s)
    {
        if(x == '(')
        {
            st.push(x);
        }
        else{
            if(st.empty())
            {
                cout << "NO\n";
            }
            st.pop();
        }
    }
    if(st.empty()) cout << "YES\n";
    else cout <<"NO\n";
    return 0;
}
