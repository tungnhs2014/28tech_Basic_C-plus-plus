/*
Theo định lý Pytago, ta dã biết 1 bộ 3 số a,b,c thaoir mãn a^2 + b^2 = c^2 thì đó là 3 cạnh của 1 tam giác vuống. 
Cho dãy số A[] gồm N phần tử. Nhiệm vụ của bạn là kiểm tra xem có tồn tại tại bộ 3 số thỏa mãn là 3 cạnh 
của 1 tam giác vuông hay không?
Input:
Dòng đầu tiên là số nguyên N, dòng tiếp theo gồm N số nguyên A[i]
Constraints:
1 <= N <= 5000; 1 <= A[i] <= 10^9
Output:
YES nếu tồn tại, ngược lại NO
Sample intput
3
3 4 5
Sample Ouput:
YES 
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        a[i] = 1ll * x *x;
    }
    sort(a , a + n);
    for(int i = n - 1; i >= 2; i--)
    {
        int l = 0, r = i - 1;
        while(l < r)
        {
            if(a[l] + a[r] == a[i])
            {
                cout <<"YES\n";
                return 0;
            }
            else if(a[i] + a[r] < a[i])
            {
                ++l;
            }
            else
            {
                --r;
            }
        }
    }
    cout << "NO\n";
    return 0;
}
