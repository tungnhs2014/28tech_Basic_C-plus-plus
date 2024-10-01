/*
Xây dựng cấu trúc phân số với 2 thành phần là tử và mẫu. Tiến hành nhập 2 phân số từ bàn phím và in ra phân số ở dạng tối giản. 
Tính tổng, hiệu của 2 phân số và in ra ở dạng tối giản. Chú ý trong trường hợp mẫu số âm thì đưa dấu âm lên trên tử

Input Format

Dòng đầu tiên là tử và mẫu của phân số thứ 1. Dòng thứ 2 là tử và mẫu của phân số thứ 2.

Constraints

Tử và mẫu là các số nguyên nằm nằm trong đoạn [1, 1000]

Output Format

Dòng 1 in ra phân số thứ nhất ở dạng tối giản. Dòng 2 in ra phân số thứ 2 ở dạng tối giản. 
Dòng 3 in ra tổng của 2 phân số ở dạng tối giản. Dòng 4 in ra hiệu của 2 phân số ở dạng tối giản.

Sample Input 0

145 639
911 93
Sample Output 0

145/639
911/93
198538/19809
-189548/19809
*/

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

PhanSo tong(PhanSo a, PhanSo b)
{
    PhanSo res;
    res.ms = a.ms * b.ms;
    res.ts = a.ts * b.ms + b.ts * a.ms;
    rutgon(res);
    return res;
}

PhanSo hieu(PhanSo a, PhanSo b)
{
    PhanSo res;
    res.ms = a.ms * b.ms;
    res.ts = a.ts * b.ms - b.ts * a.ms;
    rutgon(res);
    return res;
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
    PhanSo ps1, ps2;
    nhapso(ps1);
    nhapso(ps2);
    rutgon(ps1);
    rutgon(ps2);
    output(ps1);
    output(ps2);

    PhanSo ps_sum = tong(ps1, ps2);
    PhanSo ps_sub = hieu(ps1, ps2);

    output(ps_sum);
    output(ps_sub);
    return 0;
}
