#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll powMod(ll a, ll b)
{
    ll res = 1;
    while(b)
    {
        if(b & 1) res *= a; // b & 1 b % 2 == 1
        a *= a;
        // b dich phai 1 bit
        b >>= 1; // b /= 2
    }
    return res;
}


int main(int argc, char const *argv[])
{
    // XOR 
    // cho 1 mang chi cos duy nhat 1 phan tu co so lan xuat hien la le
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans ^= a[i];
    }
    cout << ans << endl;

    return 0;
}
