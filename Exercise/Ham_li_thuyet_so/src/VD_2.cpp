#include <bits/stdc++.h>
using namespace std;

using ll = long long;

/*
Kiểm tra 1 số có phải là só fibonacci hay không?
c++: 9*10^8
*/

bool check1(ll n)
{
    if(n == 0 || n == 1) return true;
    ll f1 =1, f2 = 0;
    for(ll i = 2; i <= 92; i++)
    {
        ll fn = f1 + f2;
        if(n == fn) return true; 
        f2 = f1;
        f1 = fn;
    }
    return false;
     
}

void check2(ll n)
{
    ll fibo[100];
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i <= 92; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    for(int i = 0; i < n; i++)
    {
        cout << fibo[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    cout <<"Nhap so can kiem tra: ";
    ll n;
    cin >> n;
    if(check1(n))
        cout << n << " la so fibonacci\n";
    else
        cout << n << " khong la so fibonacci\n";
    
    check2(n);
    
    return 0;
}   