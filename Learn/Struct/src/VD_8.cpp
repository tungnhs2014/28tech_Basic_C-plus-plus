#include <bits/stdc++.h>
using namespace std;

struct  diachi
{
    string nuoc, tp;
};

struct SinhVien
{
    string ten, ns;
    diachi dc;
    double gba;
};


int main(int argc, char const *argv[])
{
    SinhVien x;
    getline(cin, x.ten);
    cin >> x.ns >> x.dc.nuoc >> x.dc.tp >> x.gba;
    cout << x.ten << " " << x.dc.nuoc << " " << x.dc.tp << " " << x.gba << endl; 
    return 0;
}
