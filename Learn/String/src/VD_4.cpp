#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    getline(cin, s);
    cout << s[0] << endl;
    cout << s[s.size() - 1] << endl;
    cout << s.front() << endl;
    cout << s.back() << endl;

    return 0;
}
