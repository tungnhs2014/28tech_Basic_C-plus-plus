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

int main(int argc, char const *argv[])
{
    set<int> se;
    for(int i = 1; i <=5; i++) se.insert(i);
    if(se.find(3) == se.end())
    {
        cout <<"KHONG TIM THAY\n";
    }
    else
    {
        cout <<"TIM THAY\n";
    }
    auto it = se.find(3);
    if(it != se.end()) cout <<"TIM THAY\n";
    else cout <<"KHONG TIM THAY\n";

    if(se.count(3) != 0) cout <<"TIM THAY\n";
    else cout <<"KHONG TIM THAY\n";
    return 0;
}