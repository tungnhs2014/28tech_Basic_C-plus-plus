/*
Cho mảng các số nguyên. Tìm phần tử lặp đầu tiên trong mảng
Input:
Dòng đàu tiên là số lượng phần tử trong mảng n. Dòng thứ 2 là các phần tử trong mảng.
Constraints:
1 <= n <= 10^6; 0 <= A[i] <= 10^6
Ouput:
In ra số bị lặp đàu tiền trong mảng, nếu không có số nào bị lặp in ra -1
Sample input:
5
1 2 2 3 1
Sample Output:
2
*/

#include <bits/stdc++.h>
using namespace std;

int mark[1000001];

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++)
    {
        if(mark[a[i]] == 1)
        {
            cout << a[i];
            return 0;
        }
        mark[a[i]] = 1; 
    }
    cout <<"-1\n";
    return 0;
}
