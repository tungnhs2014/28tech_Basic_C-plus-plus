#include <bits/stdc++.h>
using namespace std;

using ll = long long;

/*
Tổ hợp chập K của N
c++: 9*10^8
*/

ll gt(int n)
{
    ll res = 1;
    for(int i = 1; i <= n; i++) res *=i;
    return res;
}

ll tohop(int n, int k)
{
    ll ngt = gt(n);
    ll kgt = gt(k);
    ll nkgt = gt(n-k);
    return ngt / (kgt * nkgt);
}

ll tohop2(int n, int k)
{
    ll res = 1;
    k = min(k ,n-k);
    for(int i = 1; i <= k; i++)
    {
        res *= (n - i + 1);
        res /= i;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    cout << "Nhap so: ";
    int n, k;
    cin >> n >> k;
    cout << tohop(n, k) << endl;
    cout << tohop2(n, k) << endl;
    return 0;
}   