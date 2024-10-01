#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
    ll temp;
    while(b)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

struct  PhanSo
{
    ll ts, ms;
};

void nhapso(PhanSo &p)
{
    cin >> p.ts >> p.ms;
}

void rutgon(PhanSo &p)
{
    ll k = gcd(p.ts, p.ms);
    p.ts /= k;
    p.ms /= k;
}

void output(PhanSo p)
{
    if(p.ms < 0)
    {
        cout << p.ts*(-1) << "/" << p.ms*(-1) << endl;
    }
    else{
        cout << p.ts << "/" << p.ms << endl;
    }
}

int main(int argc, char const *argv[])
{
    PhanSo ps;
    nhapso(ps);
    rutgon(ps);
    output(ps);
    return 0;
}
