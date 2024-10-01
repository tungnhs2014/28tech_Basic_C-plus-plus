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
// multimap <key, value>

// insert(): logN
// find(x): logN
// count(x): logN
// --iterator den phan tu
// --mp.end()

// - N số nguyên, -10^18 <= A[i] <= 10^18
// map <ll, int> mp;

// multimap
int main(int argc, char const *argv[])
{
    multimap <int, int> mp;
    mp.insert({1, 1});
    mp.insert({1, 3});
    mp.insert({1, 3});
    mp.insert({2, 4});
    mp.insert({2, 5});
    mp.insert({3, 6});

    for(auto it : mp)
    {
        cout << it.first << ' ' << it.second << endl;
    }
    cout << mp.count(1) << endl;
    // mp.erase(2);
    // for(auto it : mp)
    // {
    //     cout << it.first << ' ' << it.second << endl;
    // }

    auto it = mp.find(1);
    mp.erase(it);
    for(auto it : mp)
    {
        cout << it.first << ' ' << it.second << endl;
    }
    mp.erase(10); // runtime error
    return 0;

}
