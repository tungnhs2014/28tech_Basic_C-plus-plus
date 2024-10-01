#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// set
// multiset
// unordered_set

// insert(x): logN
// size(x): O(1)
// find(x): logN
// count(x): logN
// erase(x): logN

int main(int argc, char const *argv[])
{
    set<int> se;
    for(int i = 1; i <=5; i++) se.insert(i);
    se.erase(3);
    for(auto it = se.begin(); it != se.end(); ++it)
    {
        cout << *it << ' ';
    } 
    return 0;
}