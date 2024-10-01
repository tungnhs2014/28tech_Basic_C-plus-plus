/*
Có n quả táo với khối lượng đã biết. Nhiệm vụ của bạn là chia táo thành 2 nhóm sao cho sự khác biệt giữa trọng lượng của 2 nhóm là nhỏ nhất.

Intput:
Dòng 1 lá số nguyên dương N: số lượng quả táo. Dòng 2 là N só nguyên p1, p2,...,pn là trọng lượng tương ứng của các quả táo.

Constraints
1 <= N <= 20; 1 <= pi <= 10^9

Output:
In ra độ chênh lệch nhỏ nhất giữa 2 nhóm táo

Sample input 0:
5
3 2 7 4 1
Sample output 0:
1
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n];
    for(int i= 0; i < n; i++) cin >> a[i];
    ll res = 1e18;

    for(int i= 0; i < pow(2, n); i++){
        ll sum1 = 0, sum2 = 0;
        for(int j = 0; j < n; j++)
        {
            if(i & (1 << j))
            {
              // bit thu j cua so nhi phan i duoc bat
              sum1 += a[j];   
            }
            else{
                sum2 += a[j];
            }
        }
        res = min(res, abs(sum1 - sum2));
    }
    cout << res << endl;
    return 0;
}
