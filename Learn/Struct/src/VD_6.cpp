#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct SoPhuc{
    int thuc, ao;
    friend SoPhuc operator+ (SoPhuc a, SoPhuc b){
        SoPhuc res;
        res.thuc = a.thuc + b.thuc;
        res.ao = a.ao + b.ao;
        return res;
    }

    friend bool operator == (SoPhuc a, SoPhuc b){
        return a.thuc == b.thuc && a.ao == b.ao;
    }

    friend istream& operator >> (istream& in, SoPhuc& sp)
    {
        in >> sp.thuc >> sp.ao;
        return in;
    }

    friend ostream& operator << (ostream& out, SoPhuc& sp)
    {
        out << sp.thuc << " + " << sp.ao << "i" << endl;
        return out;
    }
};

int main(int argc, char const *argv[])
{
    SoPhuc sp[100];
    int n, cnt = 0; cin >> n;
    SoPhuc temp{1, 2};
    for(int i = 0; i < n; i++)
    {
        cin >> sp[i];
        if(sp[i] == temp) ++cnt;
    }
    cout << cnt << endl;
    for(int i = 0; i < n; i++)
    {
        cout << sp[i];
    }
    return 0;
}
