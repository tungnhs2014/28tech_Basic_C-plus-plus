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
    vector<int> a;
    a.push_back(100);
    a.push_back(200);
    a.push_back(300);
    cout << a[0] << endl;
    cout << a.size() << endl;
    a.push_back(400);
    cout << a.size() << endl;

    for(int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for(int i = a.size() - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for(int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    for(vector<int>::iterator it = a.begin(); it != a.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // C++ 11 tro len
    for(auto it = a.begin(); it != a.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout <<*(a.begin() + 2) << endl;

    int n; cin >> n;
    vector<int> b(n); // ngoac tron
    vector<int> c(n, 100); // ngoac tron
    int d[20];
    memset(d, 0, sizeof(d)); // gan phan tu 0 va -1

    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for(int x : b)
    {
        cout << x << ' ';
    }
    cout << endl;
    for(int x : d)
    {
        cout << x << ' ';
    }
    return 0;
}
