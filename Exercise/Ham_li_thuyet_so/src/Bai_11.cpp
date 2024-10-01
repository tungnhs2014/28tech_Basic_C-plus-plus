/*
Cho số tự nhiên N. Nhiệm vụ của bạn là in ra ước số nguyên tố nhỏ nhất của các số từ 1 đến N. Ước số nguyên tố nhỏ nhất của 1 là 1. 
Ước số nguyên tố nhỏ nhất của các số chẵn là 2. Ước số nguyên tố nhỏ nhất của các số nguyên tố là chính nó.

Input Format

Một số N được ghi trên một dòng.

Constraints

1≤N≤100000

Output Format

Đưa ra kết quả theo từng dòng

Sample Input 0

6
Sample Output 0

1
2
3
2
5
2
*/

#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    if(n == 1) return 1;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return i;
    }
    return n;
}

int main(int argc, char const *argv[])
{
    int n;  cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cout << solve(i) << "\n";
    }
    return 0;
}
