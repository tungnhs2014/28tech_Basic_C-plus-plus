/*
int n, x[100]
x[i]: bit thu i
X = {x1, x2, x3,...., xn}

X[i-1] < X[i] <= n - k + i
*/ 

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, k, x[100];
int cnt = 0;
void Try(int i)
{
    ++cnt;
    for(int j = x[i - 1] + 1; j <= n -k + i; j++)
    {
        x[i] = j;
        if(i == k)
        {
            for(int i = 1; i <= k; i++) cout << x[i];
            cout << endl;
        }
        else
        {
            Try(i + 1);
        }

    }
    cout <<cnt << endl;
}

int main(int argc, char const *argv[])
{
    cin >> n >> k;
    Try(1);
    return 0;
}
