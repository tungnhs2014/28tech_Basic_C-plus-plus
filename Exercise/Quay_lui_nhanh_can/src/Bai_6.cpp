/*
Cho một bàn cơ vua có kích thước n * n. Vấn đề đặt ra rằng, có n quân hậu, bạn cần đếm số cách đặt n quân hậu 
này lên bàn cờ sao cho 2 quân hậu bất kì, chúng không ăn nhau. 

Intput:
Dòng duy nhất chứa n là kích thước của bàn cờ

Constraints
1 <= N <= 12

Output:
In ra số cách xếp hậu hợp lệ

Sample input 0:
8
Sample output 0:
92

*/

#include <bits/stdc++.h>
using namespace std;

int n, c[25], d1[50], d2[50], res;
int X[1001];
// void inkq()
// {
//     int a[100][100];
//     memset(a, 0, sizeof(a));
//     for(int i = 1; i <= n; i++)
//     {
//         a[i][X[i]] = 1;
//     }
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= n; j++)
//         {
//             cout << a[i][j];
//         }
//         cout << endl;
//     }
// }

void Try(int i)
{
    for(int j = 1; j <=n; j++)
    {
        if(!c[j] && !d1[i - j + n] && !d2[i + j -1])
        {
            c[j] = d1[i - j + n] = d2[i + j -1] = 1;
            X[i] = j;
            if(i == n)
            {
                res++;
                // inkq();
                // cout << endl;
            }
            else Try(i + 1);
            c[j] = d1[i - j + n] = d2[i + j -1] = 0;

        }
    }
}

int main(int argc, char const *argv[])
{
    cin >> n;
    Try(1);
    cout << res << endl;
    return 0;
}
