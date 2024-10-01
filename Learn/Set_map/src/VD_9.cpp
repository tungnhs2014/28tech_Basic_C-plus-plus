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
    mp[1] = 500;
    mp[2] = 200;
    mp[3] = 100;
    mp[4] = 400;
    // for each
    for(pair<int, int> x: mp)
    {
        cout << x.first<< ' ' << x.second << endl;
    }
    cout << endl;
    for(auto x: mp)
    {
        cout << x.first<< ' ' << x.second << endl;
    }
    cout << endl;
    // iterator
    for(map <int, int>::iterator it = mp.begin(); it != mp.end(); ++it)
    {
        cout <<(*it).first << ' ' << it->second << endl;
    }

    cout << endl;
    // for each
    for(auto x: mp)
    {
        int key = x.first;
        int value = x.second;
        // cout << key << ' ' << value << endl;
        cout << key << ' ' << mp[key] << endl;
    }
    return 0;
}
