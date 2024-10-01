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
// unordered_map <key, value>

// insert(): O(1) => O(n)
// find(x): O(1) => O(n)
// count(x): O(1) => O(n)
// --iterator den phan tu
// --mp.end()


int main(int argc, char const *argv[])
{
    unordered_map <int, int> mp;
    mp.insert({1, 1});
    mp.insert({1, 3});
    mp.insert({5, 3});
    mp.insert({2, 4});
    mp.insert({2, 5});
    mp.insert({3, 6});

    for(auto it : mp)
    {
        cout << it.first << ' ' << it.second << endl;
    }
    // cout << mp.count(1) << endl;
    return 0;

}
