/*
Một số được coi là thuần nguyên tố nếu nó là số nguyên tố,
tất cả các chữ số là nguyên tố và tổng chữ số của nó cũng là một số nguyên tố. 
Bài toán đặt ra là đếm xem trong một đoạn giữa hai số nguyên cho trước có bao nhiêu số thuần nguyên tố.

Input Format
Một dòng hai số nguyên dương tương ứng, cách nhau một khoảng trống.

Constraints
Các số đều không vượt quá 9 chữ số.

Output Format
Viết ra số lượng các số thuần nguyên tố tương ứng

Sample Input 0
2345 6789

Sample Output 0
15
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool nt(ll n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    if(n > 1) return true; 
    return false;   
}

bool csnt(int n)
{
    int sum = 0;
    while(n != 0)
    {
        int r = n % 10;
        sum += r;
        if(r != 2 && r != 3 && r != 5 && r != 7)
        {
            return false;
        }
        n /= 10;
    }
    if(nt(sum)) return true;
    return false;
}

// bool tongnt(int n)
// {
//     int sum = 0;
//     while(n !=0)
//     {
//         sum += n % 10;
//         n /= 10;
//     }
//     if(nt(sum))
//     {
//         return true;
//     }
//     return false;
// }

int main(int argc, char const *argv[])
{
    int a, b; cin >> a >> b;
    int dem = 0;
    for(int i = a; i <= b; i++)
    {
        if(csnt(i) && nt(i))
        {
            dem++;
        }
    }
    cout << dem;
    return 0;
}
