/*
int n, x[100]
x[i]: bit thu i
X = {x1, x2, x3,...., xn}

Try(int i)
{
    for(j = <kha nang 1>; j <= <kha nang m>; j++)
    {
        if(<Co the gan j cho X[i]>)
        x[i] = j;
        <Danh dau j da duoc su sung>
        if(i ==n)
        {
            <In ra ket qua>
        }
        else
        {
            Try(i + 1) //backtrack
        }
        // bo ghi nhan
    }
}

*/ 

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, x[100];
bool used[100];

// used[i] = true: gia tri i da duoc su dung
// used[u] = false: trong cau hinh hien tai chua su dung i


void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(used[j] == false)
        {
            // gia tri j chua duoc gan cho cac phan tu X[1] = X[i-1]
            x[i] = j;
            // J da duoc su dung de gan x[i]
            used[j] = true;
            if(i == n)
            {
                for(int i = 1; i <= n; i++) cout << x[i];
                cout << endl;
            }
            else
            {
                Try(i + 1);
            }
            used[j] = false;
        }
    }
}

int main(int argc, char const *argv[])
{
    cin >> n;
    Try(1);
    return 0;
}
