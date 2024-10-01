/*
Xây dựng cấu trúc số phức gồm phần thực, phần ảo. Tiến hành nhập 2 số phức và tính tổng, hiệu, tích của 2 số phức này và in ra màn hình.

Input Format

Dòng 1 là phần thực và ảo của số phức thứ 1. Dòng 2 là phần thực và ảo của số phức thứ 2.

Constraints

Phần thực, ảo của số phức là các số nguyên nằm trong đoạn từ [-1000, 1000]

Output Format

Lần lượt in ra tổng, hiệu, tích của 2 số phức trên từng dòng.

Sample Input 0

972 646
787 474
Sample Output 0

1759 1120
185 172
458760 969130
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct SoPhuc{
    int thuc, ao;
};

void nhap(SoPhuc &sp)
{
    cin >> sp.thuc >> sp.ao;
}

SoPhuc operator+ (SoPhuc a, SoPhuc b){
    SoPhuc res;
    res.thuc = a.thuc + b.thuc;
    res.ao = a.ao + b.ao;
    return res;
}

SoPhuc operator- (SoPhuc a, SoPhuc b){
    SoPhuc res;
    res.thuc = a.thuc - b.thuc;
    res.ao = a.ao - b.ao;
    return res;
}

SoPhuc operator* (SoPhuc a, SoPhuc b){
    SoPhuc res;
    res.thuc = a.thuc * b.thuc - a.ao * b.ao;
    res.ao =  a.thuc * b.ao + a.ao * b.thuc;
    return res;
}

void in_sophuc(SoPhuc a)
{
    cout << a.thuc << " " << a.ao << endl;
}

int main(int argc, char const *argv[])
{
    SoPhuc sp1, sp2;
    nhap(sp1); nhap(sp2);

    SoPhuc sp_sum = sp1 + sp2; 
    SoPhuc sp_sub = sp1 - sp2; 
    SoPhuc sp_add = sp1 * sp2; 

    in_sophuc(sp_sum);
    in_sophuc(sp_sub);
    in_sophuc(sp_add);

    return 0;
}
