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

int main(int argc, char const *argv[])
{
    unordered_set<int> se;
    se.insert(1);
    se.insert(5);
    se.insert(1);
    se.insert(3);
    se.insert(2);
    se.insert(4);
    cout << se.size() << endl;   
    for(auto x: se)
    {
        cout << x << ' ';
    }
    cout << endl;
    // cout << se.count(1) << endl;
    // se.erase(2);
    // for(auto x: se)
    // {
    //     cout << x << ' ';
    // }
    // auto it = se.find(1); // tra ve iterator den phan tu 1 dau tien trong multiset
    // se.erase(it);
    // for(auto x: se)
    // {
    //     cout << x << ' ';
    // }
    return 0;
}
