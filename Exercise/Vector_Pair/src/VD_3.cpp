// Vector and Pair
// Pair <int, int>
// - first
// - second

// Vector
// push_back
// size
// iterator (begin, end)
// pop_back // xoa phan tu cuoi vector
// erase // xoa phan tu (VD: a.erase(a.begin() + 4)) xoa phan tu o vi tri so 4
// a.erase(a.begin() +4, a.begin() + 7 +1) xoa phan tu [4 : 7] (do phuc tap O(n))
// a.insert(a.begin() + 3, 100) // them 100 vao chi so 3
// clear: xoa mang

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> a(10);
    for(int i = 1; i <= 10; i++)
    {
        a[i-1] = i;
    }
    for(int x : a)
    {
        cout << x << " ";
    }
    cout << endl;
    a.insert(a.begin() + 3, 1000); // them 1000 vao chi so 3
    for(int x : a)
    {
        cout << x << " ";
    }
    cout << endl;
    a.clear();
    for(int x : a)
    {
        cout << x << " ";
    }
    return 0;
}
