/*
Cho dãy số A[] gồm có N phần tử và số nguyên X, hãy in ra vị trí xuất hiện đầu tiên và vị trí xuất hiện cuối cùng của X trong mảng,
trong trường hợp X không xuất hiện trong mảng thì in ra là -1
Input:
Dòng đầu tiên là số nguyên N và X. Dòng tiếp theo gồm N só nguyên A[i]
Constraints
1 <= N <= 10^6; 1 <= A[i] <= 10^9
Output:
In ra kết quả bài toán
Sample Input:
10 5
1 2 3 4 5 6 7 5 2 8
Sample Output:
5 8
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, x; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int first = -1, last = -1;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            last = i + 1;
            if(first == -1) first = i + 1;
        }
    }
    cout << first << ' ' << last << endl;
    return 0;
}
