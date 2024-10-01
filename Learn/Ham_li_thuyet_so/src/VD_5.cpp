
/*
Sàng số nguyên tố
Để sàng được số nguyên tố <=n: Phải tạo được mảng có cỡ n + 1
c++: 9*10^8s
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int n = (int)1e7;
bool nt[n + 1];

void sang()
{
    // Coi tat ca cac so tu 0 toi n la so nguyen to
    // nt[i] = true
    for(int i = 0; i <= n; i++)
    {  
        nt[i] = true;
    }
    nt[0] = nt[1] = false; // 0 va 1 khong phai la so nguyen to
    // Duyet tu 2 toi can bac 2 cua n
    for(int i = 2; i <= sqrt(n); i++)
    {
        // neu i la so nguyen to
        if(nt[i] == true)
        {
            // loai cac boi cua i
            for(int j = i*i; j <= n; j += i)
                nt[j] = false;
        }
    }
}

bool nt1(ll n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    return n > 1;
}


int main(int argc, char const *argv[])
{
    cout << "Nhap so: ";
    int n; cin >> n;
    sang();
    for(int i = 0; i <= n; i++)
    {
        if(nt[i] == true)
            cout << i << " ";
    }
    return 0;
}   