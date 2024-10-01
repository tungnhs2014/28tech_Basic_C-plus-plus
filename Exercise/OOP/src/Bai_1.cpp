/*
Viết chương trình khai báo lớp Phân số gồm 2 thuộc tính private là tử số và mẫu số. Sau dó thực hiện nhập vào
một phân số và in ra phân số đó ở dạng tối giản.

Input Format
Cả hai số nguyên dương lần lượt là tử số và mẫu số.

Constraints
Các giá trị đều nguyên dương và không quá 18 chữ số. 

Output Format
Ghi ra phân số tối giản

Sample Input 0
334 37

Sample Output 0
334/37 

Sample Input 1
312 945

Sample Output 1
104/315
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
    ll tmp;
    while(b)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

class PhanSo
{
private:
    ll tu, mau;
public:
    void nhap()
    {
        cin >> this->tu >> this->mau;
    }
    void rutgon()
    {
        ll ucln = gcd(this->tu, this->mau);
        this->tu /= ucln;
        this->mau /= ucln;
    }
    void xuat()
    {
        cout << this->tu << "/" << this->mau << endl;
    }
    
};

int main(int argc, char const *argv[])
{
    PhanSo x;
    x.nhap();
    x.rutgon();
    x.xuat();
    return 0;
}

