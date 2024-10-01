#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Cho 1 mảng số nguyên, đếm số lượng số nguyên tố trong dãy
bool nt(long long n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    return n > 1;
}

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(nt(a[i]))
            dem++;
    }
    cout << dem << endl;
    return 0;
}
