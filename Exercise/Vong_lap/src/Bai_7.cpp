/*
Đếm số lượng ước và liệt kê các ước theo thứ tự tăng dần của số nguyên dương N

Input Format

Số nguyên dương N không quá

Constraints

1≤N≤10^6

Output Format

Kết quả của bài toán

Sample Input 0

28
Sample Output 0

6
1 2 4 7 14 28
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int dem_uoc = 0;
    for(int i = 1; i <=n; i++)
    {
        if(n % i == 0) 
            dem_uoc++;
    }
    cout << dem_uoc << endl;
    for(int i = 1; i <=n; i++)
    {
        if(n % i == 0) 
            cout << i << " ";
    }
    return 0;
}