/*
Cho các từ chỉ bao gồm chữ cái in hoa và in thường, bạn được yêu cầu ghép các từ này lại với nhau sao cho từ được ghép lại sau cùng có thứ tự từ điển lớn nhất.

Input Format

Dòng đầu tiên là số nguyên dương N - số lượng từ; Dòng thứ 2 gồm N từ, mỗi từ cách nhau một dấu cách.

Constraints

1≤N≤1000;

Output Format

In ra xâu sau khi ghép.

Sample Input 0

4
ab abc abcd aa
Sample Output 0

abcdabcabaa
*/

#include <bits/stdc++.h>
using namespace std;

bool cmp(string s, string t)
{
    string st = s + t;
    string ts = t + s;
    return st > ts;
}

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    string a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }    
    sort(a, a + n, cmp);
    for(string x : a)
    {
        cout << x;
    }
    return 0;
}
