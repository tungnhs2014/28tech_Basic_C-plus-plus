#include <bits/stdc++.h>
using namespace std;

// Vector and Pair
// Pair <int, int>
// - first
// - second

int main(int argc, char const *argv[])
{
    // pair<int ,int> a = make_pair(100, 200); // C++ 98
    // cin >> a.first;
    // cin >> a.second;
    pair<int ,int> a = {100, 100}; // C++ 11
    cout <<a.first << ' ' << a.second<<endl;
    
    int n; cin >> n;
    pair<int, int> b[100]; // 100 phan tu
    for(int i = 0; i < n; i++)
    {
        cin >> b[i].first >> b[i].second;
    }
    for(int i = 0; i < n; i++)
    {
        cout << b[i].first << ' ' << b[i].second;
    }
    return 0;
}
