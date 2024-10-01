/*
Số hoàn hảo là số có tổng các ước thực sự (Không tính chính nó) bằng chính số đó. Cho một số nguyên dương n, 
kiểm tra xem n có phải là số hoàn hảo hay không.

Định lý Euclid - Euler :
' Nếu p là số nguyên tố và 2^p - 1 cũng là số nguyên tố thì : 2^(p-1) * (2^p - 1) sẽ tạo thành 1 số hoàn hảo. 
Ví dụ p = 2, 2^2 - 1 = 3, 2 * 3 = 6 => HH Ví dụ p = 3, 2^3 - 1 = 7, 4 * 7 = 28 => HH

Input Format
Số nguyên dương N

Constraints

1≤N≤9*10^18

Output Format
In YES nếu N là số hoàn hảo, ngược lại in NO
*/


#include <bits/stdc++.h>
using namespace std;

bool isPerfect(long long n)
{
    long long sum_uoc = 1;
    for(long long i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        { 
            sum_uoc += i;
            if(i != n / i)
                sum_uoc += n/i;
        }
    }
    return sum_uoc == n;
}

int main(int argc, char const *argv[])
{
    long long n; 
    cin >> n;
    if(isPerfect(n))
        cout <<"YES";
    else
        cout <<"NO";
    return 0;
}
