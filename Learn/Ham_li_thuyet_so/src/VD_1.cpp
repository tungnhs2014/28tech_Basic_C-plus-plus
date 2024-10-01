#include <bits/stdc++.h>
using namespace std;

// Ham tim UCLN
long long gcd(long long a, long long b)
{
    long long r = 0;
    while(b !=0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// Ham tim BCNN
long long lcm(long long a, long long b)
{
    return a/gcd(a, b) * b; // tranh tran so khi nhan a va b
}

// Ham so nguyen to cung nhau
bool IsCoPrime(long long a, long long b)
{
    return gcd(a, b) == 1;
}

int main(int argc, char const *argv[])
{
    long long a = 10, b = 7;
    cout << "UCLN(a, b) = " << gcd(a, b) << "\n";
    cout << "BCNN(a, b) = " << lcm(a, b) << "\n";
    if(IsCoPrime(a, b))
        cout << a << " va " << b << " la so nguyen to cung nhau\n";
    else
        cout << a << " va " << b << " khong la so nguyen to cung nhau\n";
    return 0;
}   