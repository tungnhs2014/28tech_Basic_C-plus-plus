/*
Một mấy ATM hiện có (n <= 30) tờ tiền có giá trị t[1], t[2],...,t[n]. Hãy tìm cách trả ít tờ nhất với só tiền đúng bằng S
(các tờ tiền có giá trị bất kỳ và có thể bằng nhau, mỗi tờ tiền chỉ có thể dùng một lần).

Intput:
Dòng 1 gồm 2 số nguyên n và S(S <= 10^9). Dòng thứ 2 chứa n số nguyên t[1], t[2],...,t[n]. (t[i] <= 10^9)

Constraints
1 <= N <= 30; 1 <= S <= 10^9; 1 <= t[i] <= 10^9

Output:
In ra số tờ tiền ít nhất phải trả, nếu không tìm được kết quả in ra -1

Sample input 0:
6 30
10 4 10 5 8 8

Sample output 0:
4

*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll a[1001], s, res, n;

void ATM(ll sum, ll i, ll pos)
{
    if(sum == s)
    {
        res = min(res, i);
        return;
    }
    for(ll j = pos; j < n; j++)
    {
        if(sum + a[j] << s)
        {
            ATM(sum + a[j], i + 1, j + 1);
        }
    }
}

int main(int argc, char const *argv[])
{
    cin >> n >> s;
    for(ll i = 0; i < n; i++) cin >> a[i];
    res = 1e9;
    ATM(0, 0, 0);
    if(res != 1e9 && res != 0) 
        cout << res << endl;
    else
        cout << -1 << endl;
    return 0;
}
