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
    vector<int> hop, giao;
    while(i < n && j < m)
    {
        if(a[i] == b[j])
        {
            giao.push_back(a[i]);
            hop.push_back(a[i]);
            ++i;
            ++j;
        }
        else if(a[i] < b[j])
        {
            hop.push_back(a[i]);
            ++i;
        }
        else
        {
            hop.push_back(b[j]);
            ++j;
        }
    }
    while(i < n)
    {
        hop.push_back(a[i]);
        i++;
    }
    while(j < m)
    {
        hop.push_back(b[j]);
        j++;
    }
    for(int x : giao) cout << x << ' ';
    cout << endl;
    for(int x : hop) cout << x << ' ';
    return 0;
}
