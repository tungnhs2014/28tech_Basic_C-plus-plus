/*
Xét tất cả các tập hợp các số nguyên dương có các phần tử khác nhau và không lớn hơn số n cho trước. Nhiệm vụ của bạn là hãy đếm xem
có tất cả bao nhiêu tập hợp có số lượng phần tử bằng k và tổng các phần tử trong tập hợp bằng s? Các tập hợp là hoán vị của nhau chỉ
tính là một. Ví dụ với n = 9, k = 3, s = 23, {6, 8, 9} là tập hợp duy nhất thỏa mãn.

Intput:
Một dòng gồm 3 số nguyên n, k, s

Constraints
1 <= n <= 20, 1 <= k <= 10, 1 <= s <= 155

Output:
In ra số lượng tập hợp thỏa mãn điều kiện đề bài

Sample input 0:
16 8 91

Sample output 0:
28

*/

#include <bits/stdc++.h>
using namespace std;

int n, k, s, res;

void Backtrack(int sum, int cnt, int pos)
{
    if(sum == s && cnt == k)
    {
        ++res;
        return;
    }
    for(int j = pos; j <= n; j++)
    {
        if(sum + j <= s)
        {
            Backtrack(sum + j, cnt + 1, j + 1);
        }
    }
}

int main(int argc, char const *argv[])
{
    cin >> n >> k >> s;
    res = 0;
    Backtrack(0, 0 , 1);
    cout << res << endl;
    return 0;
}
