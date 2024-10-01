/*
Cho một bàn cơ vua có kích thước 8 x 8, mỗi ô có 1 giá trị A[i][j] nhất định (0<=A[i][j] <=100), tương ứng với điểm số đạt được
nếu như bạn đặt 1 quân cờ vào đó. Nhiệm vụ của bạn là đặt 8 quân hậu trên bàn cờ, sao cho không có 2 quân nào ăn nhau và só điểm 
đạt được là lớn nhất.

Intput:
Gồm 8 dòng, mỗi dòng gồm 8 số tương ứng với các số trên bàn cờ.

Constraints
1 <= A[i][j] <= 100

Output:
In ra số điểm đạt được lớn nhất.

Sample input 0:
12 29 80 91 56 46 97 13
54 88 27 84 85 9 32 77
48 80 88 74 30 77 38 98
6 82 20 95 7 86 12 43
100 82 15 7 95 9 5 84
51 40 65 98 86 38 30 63
96 78 98 76 33 11 2 58
33 51 35 68 62 87 67 39

Sample output 0:
653

*/

#include <bits/stdc++.h>
using namespace std;

int n, a[9][9], c[25], d1[50], d2[50], res = 0, sum;

void Try(int i)
{
    for(int j = 1; j <=n; j++)
    {
        if(!c[j] && !d1[i - j + n] && !d2[i + j -1])
        {
            c[j] = d1[i - j + n] = d2[i + j -1] = 1;
            sum += a[i][j];
            if(i == n)
            {
                res = max(res, sum);
            }
            else Try(i + 1);
            c[j] = d1[i - j + n] = d2[i + j -1] = 0;
            sum -= a[i][j];

        }
    }
}

int main(int argc, char const *argv[])
{
    n = 8;
    for(int i = 1; i <= 8; i++)
    {
        for(int j = 1; j <= 8; j++)
        {
            cin >> a[i][j];
        }
    }
    Try(1);
    cout << res << endl;
    return 0;
}