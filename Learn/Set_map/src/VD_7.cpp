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

// find, count, erase: O(1) => O(N)

// STL: Standard Template Library
// map <key, value>

// insert(): logN
// mp[key] = value => mp.insert({key, value})

int main(int argc, char const *argv[])
{
    map <int, int> mp;
    mp.insert({1, 2});
    mp.insert({2, 3});
    mp[4] = 5;
    mp.insert({1, 5});
    mp[1] = 100;
    
    cout << mp.size() << endl;
    cout << 1 << ' ' << mp[1] << endl;
    return 0;
}
