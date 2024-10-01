#include <bits/stdc++.h>
using namespace std;


// 1/5/2002 => 01/05/2002
void chuanhoa(string &s)
{
    if(s[1] == '/') s = "0" + s;
    if(s[4] == '/') s.insert(3, "0");
}

struct SinhVien
{
    string ten, ns;
    double gpa;

    friend istream& operator >> (istream& in, SinhVien& a)
    {
        cin.ignore();
        getline(in, a.ten);
        cin >> a.ns >> a.gpa;
        chuanhoa(a.ns);
        return in;
    }
    
    friend ostream& operator <<(ostream& os, SinhVien b)
    {
        os << b.ten << " " << b.ns << " " << b.gpa << endl;
        return os;
    }

    // friend bool operator < (SinhVien a, SinhVien b)
    // {
    //     return a.gpa < b.gpa;
    // }
};


string tuoi(string s)
{
    stringstream ss(s);
    string tmp, res = "";
    while (getline(ss, tmp, '/'))
    {
        res = tmp + res;
    }
    return res;
    
}

bool cmp(SinhVien a, SinhVien b)
{
    return tuoi(a.ns) < tuoi(b.ns);
}

// bool cmp(SinhVien a, SinhVien b)
// {
//     if(a.gpa != b.gpa) return a.gpa < b.gpa;
//     else return a.ten < b.ten;
// }

int main(int argc, char const *argv[])
{
    vector <SinhVien> vs;
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        SinhVien tmp; cin >> tmp;
        vs.push_back(tmp);
    }
    sort(begin(vs), end(vs), cmp);
    for(int i = 0; i < n; i++)
    {
        cout << vs[i];
    }
    
    return 0;
}
