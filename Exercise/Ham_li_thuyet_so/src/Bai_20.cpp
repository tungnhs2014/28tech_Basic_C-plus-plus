/*
Kiểm tra một số nguyên có phải là số chính phương hay không? 

Input Format
Một số nguyên dương N
Constraints
1≤N≤10^18

Output Format
In ra YES nếu N là số chính phương, ngược lại in NO

Sample Input 0
169

Sample Output 0
YES
*/

#include <bits/stdc++.h>
using namespace std;

bool sochinhphuong(long long n)
{
    long long c = sqrt(n);
    if(c * c == n) 
        return true;
    else
        return false;
}

int main(int argc, char const *argv[])
{
    long long n;
    cin >> n;
    if(sochinhphuong(n))
        cout << "YES";
    else
        cout << "NO";
        
    return 0;
}
