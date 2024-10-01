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
// find(x): logN
// count(x): logN
// --iterator den phan tu
// --mp.end()

int main(int argc, char const *argv[])
{
    map <int, int> mp;
    mp[1] = 500;
    mp[2] = 200;
    mp[3] = 100;
    mp[4] = 400;

    int dem = mp.count(10);
    cout << dem << endl;

    // mp.erase(1);
    auto it = mp.find(2);
    mp.erase(it);
    for(auto it : mp)
    {
        cout << it.first << ' ' << it.second << endl; 
    }
    return 0;
}
