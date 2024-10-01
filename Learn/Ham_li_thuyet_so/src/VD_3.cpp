#include <bits/stdc++.h>
using namespace std;

using ll = long long;

/*
Phi hàm Euler: Số các số nguyên  từ 1 đến N mà nguyên tố cùng nhau với N
c++: 9*10^8
*/

int phi(int n)
{
    int res = n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
        {
            // i la thua so nguyen to cua n
            res = res - res/i;
            while(n %i == 0)
            {
                n /= i;
            }
        }
    }
    if(n > 1)
    {
        res = res - res/n;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    cout << "Nhap so: ";
    int n;
    cin >> n;
    cout << phi(n);
    return 0;
}   