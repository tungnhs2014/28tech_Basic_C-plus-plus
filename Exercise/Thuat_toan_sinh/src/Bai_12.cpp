/*
Cho số nguyên dương N và K, nhiệm vự của bạn là liệt kê các xâu nhị phân có độ dài N và có K bit 1 theo
thứ tự từ điển tăng dần. Sau đó tiếp tục liệt kê các xâu nhị phân mà chỉ có duy nhất K bit 1 liên tiếp.

Intput:
1 dòng chứa 2 số nguyên dương N và K
Constraints
1 <= K <= N <= 15

Output:
Dòng đầu tiên in ra các xâu nhị phân có K bit 1. Dòng thứ 2 in ra các xâu nhị phân có duy nhất K bit 1 liên tiếp

Sample input 0:
3 2
Sample output 0:
011 101 110
011 110
*/


#include <bits/stdc++.h>
using namespace std;

int n, k, a[100];
int ok;
void ktao(){
    for(int i = 1; i <= n; i++) a[i] = 0;
}


void sinh()
{
    int i = n;
    while(i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        --i;
    }
    if(i == 0) ok = 0;
    else a[i] = 1;
}

bool check_1()
{
    int cnt = 0;
    for(int i = 1; i <= n; i++) cnt += a[i];
    return cnt == k;
}

bool check_2()
{
    int cnt = 0;
    int dem = 0;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] == 1) ++dem;
        else{
            if(dem > k) return false;
            if(dem == k) ++cnt;
            dem = 0;
        }
    }
    if(dem > k) return false;
    if(dem == k) ++cnt;
    return cnt == 1;

}

int main(int argc, char const *argv[])
{
    cin >> n >> k;
    ktao();
    ok = 1;
    while(ok)
    {
        if(check_1())
        {
            for(int i = 1; i <= n; i++)
            {
                cout << a[i];
            }
            cout << " ";
        }
        sinh();
    }
    cout << endl;
    ktao();
    ok = 1;
    while(ok)
    {
        if(check_2())
        {
            for(int i = 1; i <= n; i++)
            {
                cout << a[i];
            }
            cout << " ";
        }
        sinh();
    }
    return 0;
}