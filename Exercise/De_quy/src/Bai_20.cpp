/*
Cho số nguyên dương N. Bạn được thực hiện 3 thao tác sau đây: 1. Lấy N chia cho 2 nếu N chia hết cho 2. 2.
Lấy N chia hết cho 3 nếu N chia hết cho 3. 3. Giảm N đi 1 đơn vị. Hãy đếm số thao tác ít nhất để biến đổi N về 1.

Input Format
Số nguyên dương N.

Constraints
1≤n≤50

Output Format
In ra số thao tác tối thiểu cần thực hiện.

Sample Input 0
38

Sample Output 0
5
Explanation 0
Giải thích test : 1. N = N / 2 = 19 2. N = N - 1 = 18 3. N = N / 3 = 6 4. N = N / 2 = 3 5. N = N / 3 = 1
*/
#include <bits/stdc++.h>
using namespace std;
using ll =  long long;

int solve(int n)
{
    if(n == 1) return 0;
    int cnt1 = 1e9, cnt2 = 1e9, cnt3 = 1e9;
    if(n % 2 == 0)
        cnt1 = 1 + solve(n / 2);
    if(n % 3 == 0)
        cnt2 = 1 + solve(n / 3);
    if (n > 1)
        cnt3 = 1 + solve(n - 1);

    return min({cnt1, cnt2, cnt3});
}

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    cout << solve(n) << endl;
    return 0;
}