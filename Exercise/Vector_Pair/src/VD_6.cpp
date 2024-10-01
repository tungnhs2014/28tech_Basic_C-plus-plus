// Tron 2 mang da sap xep thanh 1 mang theo tang dan
// O(n + m)
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    int i = 0, j = 0;
    while(i < n && j < m)
    {
        // so sanh a[i] va b[j]
        if(a[i] <= b[j])
        {
            cout << a[i] << " ";
            ++i;
        }
        else
        {
            cout << b[j] << " ";
            ++j;
        }
    }
    while(i < n)
    {
        cout << a[i] << " ";
        ++i;
    }
    while(j < m)
    {
        cout << b[j] << " ";
        ++j;
    }
    return 0;
}
