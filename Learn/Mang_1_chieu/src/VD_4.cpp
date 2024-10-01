#include <bits/stdc++.h>
using namespace std;

// Tinh trung binh cong cac cac so nguyen to trong mang
bool check(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    return n > 1;
}

double tbcong(int a[], int n)
{
    int dem = 0, sum =0;
    for(int i = 0; i < n; i++)
    {
        if(check(a[i]))
        {   
            sum += a[i];
            ++dem;
        }
    }
    return (double)sum/dem;
}

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[100];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << tbcong(a, n);
    return 0;
}