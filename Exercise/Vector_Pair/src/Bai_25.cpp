/*
Cho dãy số A[] gồm có N phần tử, các phần tử trong mảng chỉ có 0 1 hoặc 2. Hãy sắp xếp các phần tử trong mảng theo thứ tự tăng dần.
Input:
Dòng đầu tiên là số nguyên N và X. Dòng tiếp theo gồm N só nguyên A[i]
Constraints
1 <= N <= 10^7; 0 <= A[i] <= 2
Output:
In ra mảng được sắp xếp tăng dần
Sample input:
5
1 1 0 2 1
Sample Output:
0 1 1 1 2
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int cnt[3] = {0};
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        cnt[x]++;
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < cnt[i]; j++)
        {
            cout << i << ' ';
        }
    }
    return 0;
}
