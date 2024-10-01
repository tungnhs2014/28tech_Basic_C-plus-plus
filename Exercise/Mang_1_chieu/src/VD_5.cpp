#include <bits/stdc++.h>
using namespace std;

// Check mang doi xung: palindrome
bool dx(int a[], int n)
{
    int l = 0; int r = n-1;
    while(l <= r)
    {
        if(a[l] != a[r]) return false;
        l++;
        r--;
    }
    return true;
}

bool dx2(int a[], int n)
{
    for(int i = 0; i <= n/2; i++)
    {
        if(a[i] != a[n - i -1]) return false;
    }
    return true;
}

void reserve(int a[], int n)
{
    int l = 0, r = n - 1;
    while(l <= r)
    {
        swap(a[l], a[r]); // hoan vi a[l] voi a[r]
        ++l;
        --r;
    }

}

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[100];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(dx2(a, n))
        cout << "YES\n";
    else
        cout << "NO\n";

    reserve(a, n);
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
