#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }
    for(char x : s)
    {
        cout << x << endl;
    }
    for(auto x : s)
    {
        cout << x << endl;
    }
    for(auto it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << endl;
    }
    return 0;
}
