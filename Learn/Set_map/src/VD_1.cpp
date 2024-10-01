#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// set
// multiset
// unordered_set

// insert(x): logN

int main(int argc, char const *argv[])
{
    set<int> se;
    se.insert(1);
    se.insert(2);
    se.insert(1);
    se.insert(2);
    se.insert(8);
    se.insert(4);
    cout << se.size() << endl;   
    for(auto x: se)
    {
        cout << x << ' ';
    }
    cout << endl;
    for(set<int>::iterator it = se.begin(); it != se.end(); ++it)
    {
        cout << *it << ' ';
    } 
    return 0;
}
