#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b)
{
    ll res;
    while(b)
    {
        res = a % b;
        a = b;
        b = res;
    }
    return a;
}

struct SoPhuc{
    int thuc, ao;
    // SoPhuc operator+ (SoPhuc other){
    //     SoPhuc res;
    //     res.thuc = thuc + other.thuc;
    //     res.ao = ao + other.ao;
    //     return res;
    // }

    friend SoPhuc operator+ (SoPhuc a, SoPhuc b){
        SoPhuc res;
        res.thuc = a.thuc + b.thuc;
        res.ao = a.ao + b.ao;
        return res;
    }

    friend istream& operator >> (istream& in, SoPhuc& sp)
    {
        in >> sp.thuc >> sp.ao;
        return in;
    }

    friend ostream& operator << (ostream& out, SoPhuc& sp)
    {
        out << sp.thuc << " " << sp.ao << "i" << endl;
        return out;
    }
};

struct PhanSo
{
    ll ts, ms;
};

void rutgon(PhanSo &ps)
{
    ll k = gcd(ps.ts, ps.ms);
    ps.ts /= k;
    ps.ms /= k;
}

// SoPhuc operator+ (SoPhuc a, SoPhuc b){
//     SoPhuc res;
//     res.thuc = a.thuc + b.thuc;
//     res.ao = a.ao + b.ao;
//     return res;
// }

PhanSo operator+ (PhanSo a, PhanSo b)
{
    PhanSo res;
    res.ms = a.ms * b.ms;
    res.ts = a.ts * b.ms + b.ts * a.ms;
    rutgon(res);
    return res;
}

void in_sophuc(SoPhuc a)
{
    cout << a.thuc << " + " << a.ao << "i" << endl;
}

void in_phanso(PhanSo a)
{
    if(a.ms < 0)
    {
        cout << a.ts*(-1) << "/" << a.ms*(-1) << endl;
    }
    else{
        cout << a.ts << "/" << a.ms << endl;
    }   
}

int main(int argc, char const *argv[])
{
    // SoPhuc a{1, 2}, b{8, 9};
    SoPhuc a , b;
    cin >> a >> b;
    SoPhuc c = a + b; // c{9, 11}
    // in_sophuc(c);
    cout << c;
    PhanSo p1{1, 3}, p2{5, 3};
    PhanSo ps = p1 + p2;
    in_phanso(ps);
    return 0;
}
