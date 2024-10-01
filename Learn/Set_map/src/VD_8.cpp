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
    mp[1]++; // mp[1] = 1;
    mp[1]++; // mp[1] = 2;
    cout <<mp[1] << endl;
    return 0;
}
