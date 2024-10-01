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
            // bo ghi nhan
        }
    }
}

*/ 

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, x[100];
void Try(int i)
{
    // di xay dung bit thu i cho xau nhi phan
    for(int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if(i == n)
        {
            for(int i = 1; i <= n; i++) cout << x[i];
            cout << endl;
        }
        else
        {
            Try(i + 1);
        }

    }
}

int main(int argc, char const *argv[])
{
    cin >> n;
    Try(1);
    return 0;
}
