#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Đệ quy: Recursion, Recursive, dry run

bool nt(ll n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}

int tong(int n)
{
    return n*(n + 1)/2;
}

int S(int n)
{
    if(n == 1) return 1;
    else 
        return n + S(n - 1);
}

// chay rat lau: O(2^n)

int fibo(int n)
{
    if(n == 0 || n == 1) return n;
    else return fibo(n - 1) + fibo(n - 2);
}

int gcd(int a, int b)
{
    if(b == 0) return a; // bai toan con nho nhat
    else return gcd(b, a % b); // cthuc truy hoi
}

int tohop(int n, int k)
{
    if((k == 0) || (k == n)) return 1;
    else
        return tohop(n - 1, k - 1) + tohop(n -1, k);
}

// luy thua nhi phan
int pow(int a, int b)
{
    if(b == 0) return 1;
    int tmp = pow(a, b/2);
    if(b % 2 == 1) return tmp * tmp * a;
    else return tmp * tmp;
}

int main(int argc, char const *argv[])
{
    cout << nt(10) << endl;
    cout << tong(100) << endl;
    cout << S(15) << endl;
    cout << tohop(4, 2) << endl;
    return 0;
}
