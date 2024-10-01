/*
Hãy liệt kê các cặp số nguyên tố cùng nhau và có giá trị khác nhau trong đoạn [a,b] theo thứ tự từ nhỏ đến lớn.

Input Format

Chỉ có một dòng ghi hai số a, b

Constraints

2<=a<=b<=1000

Output Format

Các cặp số i,j thỏa mãn được viết lần lượt trên từng dòng theo định dạng (i,j), theo thứ tự từ điển.
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++)
    {
        for(int j = i + 1; j <= b; j++)
        {
            if(__gcd(i, j) == 1)
            {
                cout << '(' << i << ',' << j <<')' << endl;
            }
        }
    }
    return 0;
}
