#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// set
// multiset
// unordered_set

// insert(x): logN

int main(int argc, char const *argv[])
{
    set<char> se;
    se.insert('a');
    se.insert('b');
    se.insert('c');
    se.insert('z');
    se.insert('b');
    se.insert('a');
    cout << se.size() << endl;  

    for(auto x: se)
    {
        cout << x << ' ';
    }
    cout << endl;
    for(set<char>::iterator it = se.begin(); it != se.end(); ++it)
    {
        cout << *it << ' ';
    } 
    return 0;
}
