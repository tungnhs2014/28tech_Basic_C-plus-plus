#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m; cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0;  j < m; j++)
            cin >> a[i][j];
    }
    for(int i = 0; i < n; i++)
    {
        // xet hang thu i
        long long sum = 0;
        for(int j = 0; j < m; j++) 
            sum += a[i][j];
        cout << sum << ' ';
    }
    cout << endl;

    for(int i = 0; i < m; i++)
    {
        // duyet cot thu i
        long long sum = 0;
        for(int j = 0; j < n; j++)
        {
            sum += a[j][i];
        }
        cout << sum << ' ';
    }
    cout << endl;
    return 0;
}
