/*
Cho một số nguyên không âm N, hãy in ra N theo thứ tự các chữ số từ trái qua phải và từ phải qua trái. Chú ý phải sử dụng hàm đệ quy cho cả 2 yêu cầu.

Input Format
Số nguyên không âm N.

Constraints
0≤n≤10^18

Output Format
Dòng đầu tiên in ra các chữ số của n theo thứ tự từ trái qua phải. Dòng thứ hai in ra các chữ số của n theo thứ tự từ phải qua trái. 
Các chữ số được viết cách nhau một dấu cách.

Sample Input 0
21218

Sample Output 0
2 1 2 1 8 
8 1 2 1 2 
*/


#include <bits/stdc++.h>
using namespace std;
using ll =  long long;

void int_t_p(ll n)
{
    if( n < 10)
    {
        cout << n << ' ';
        return;
    }
    else
    {
        int_t_p(n / 10);
        cout << n % 10 << ' ';
    }
}

void int_p_t(ll n)
{
    if( n < 10)
    {
        cout << n << ' ';
        return;
    }
    else
    {
        cout << n % 10 << ' ';
        int_p_t(n / 10);

    }
}

int main(int argc, char const *argv[])
{
    ll n; cin >> n;
    int_t_p(n);
    cout << endl;
    int_p_t(n);
    return 0;
}