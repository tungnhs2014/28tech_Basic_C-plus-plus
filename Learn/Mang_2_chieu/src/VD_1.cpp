#include <bits/stdc++.h>
using namespace std;

int tong(int a[][100], int n, int m)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            sum += a[i][j];
        }
    }
    return sum;
}

bool nt(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    return n > 1;
}

int main() {
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j ++)
            cin >> a[i][j];
    }
     for(int i = 0; i < n; i++)
     {
        for(int j = 0; j < m; j ++)
        {
            if(nt(a[i][j])) 
                cout << a[i][j] << ' ';
        }
        cout << endl;
     }
    
    return 0;
}
