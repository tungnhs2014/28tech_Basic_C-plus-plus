/*
Cho 2 mảng dã được sắp xếp tăng dần, thực hiện trộn 2 dãy trên thành 1 dãy được sắp sếp.
Input:
Dòng đầu tiên là số lượng phần tử của 2 dãy n mà m. Dòng thứ 2 là n phần tử trong dãy số 1. Dòng 
thứ 3 là m phần tử trong dãy thứ 2.
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    int i =0, j = 0;
    while(i < n && j < m)
    {
        if(a[i] <= b[j])
        {
            cout << a[i] << ' ';
            ++i;
        }
        else
        {
            cout << b[j] << ' ';
            ++j;
        }
    }
    while(i < n)
    {
        cout << a[i++] << ' ';
    }
    while(j < m)
    {
        cout << b[j++] << ' ';
    }
    return 0;
}
