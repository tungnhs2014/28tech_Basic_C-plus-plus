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
    map <char, int> mp;
    mp['a'] = 500;
    mp['b'] = 200;
    mp['c'] = 100;
    mp['d'] = 400;
   
    // for each
    for(auto x: mp)
    {
        char key = x.first;
        int value = x.second;
        // cout << key << ' ' << value << endl;
        cout << key << ' ' << mp[key] << endl;
    }
    // if(mp.find('e') != mp.end()) cout << "FOUND";
    // else cout <<"NOT FOUND";

    auto it = mp.find('a');
    if(mp.find('a') != mp.end()) cout << "FOUND";
    else{
        cout << it->first << ' ' << it->second << endl;
    }

    return 0;
}
