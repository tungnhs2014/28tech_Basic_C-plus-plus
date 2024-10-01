#include <bits/stdc++.h>
using namespace std;

// size, length


int main(int argc, char const *argv[])
{
    int x; cin >> x;
    string s;
    //cin >> s;
    cin.ignore(1); // Bo qua ki tu enter tu cin // chong troi lenh phim enter
    getline(cin, s); // xu li luon phim enter
    cout << s << endl;
    cout << s.size() << endl;
    cout << s.length() << endl;

    return 0;
}
