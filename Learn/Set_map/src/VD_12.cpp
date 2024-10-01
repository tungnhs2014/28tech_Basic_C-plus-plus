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

// - N số nguyên, -10^18 <= A[i] <= 10^18
// map <ll, int> mp;

int main(int argc, char const *argv[])
{
    map <ll, int> mp;
    int n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    for(auto it : mp)
    {
        cout << it.first << ' ' << it.second << endl; 
    }
    cout << endl;
    for(int i = 0; i < n;i++)
    {
        if(mp[a[i]] != 0)
        {
            cout << a[i] << ' ' << mp[a[i]] << endl;
            mp[a[i]] = 0;
        }
    }
    return 0;

}
