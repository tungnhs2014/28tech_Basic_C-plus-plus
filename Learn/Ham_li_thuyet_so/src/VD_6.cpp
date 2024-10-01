#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// Kiểm tra số thuận nghích
bool thuanNghich(int n)
{
    int lat = 0, temp = n;
    while (n)
    {
        int du = n % 10;
        lat = lat*10 + du; 
        n /= 10;
    }
    if(lat == temp) return true;
    return false;   
}

int main(int argc, char const *argv[])
{
    cout <<"Nhap so kiem tra thuan nghich: ";
    int n; cin >> n;
    if(thuanNghich(n)) cout << n << " la so thuan nghich\n";
    else cout << n << " khong la so thuan nghich\n";
    return 0;
}
