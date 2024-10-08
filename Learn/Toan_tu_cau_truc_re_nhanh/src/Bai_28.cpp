/*
Cho cấp số cộng có n phần tử, cho biết phần tử đầu tiên trong dãy là u1 và công sai d.
Hãy tính tổng các phần tử của cấp số cộng này.
Input Format
1 dòng chưa 3 số n, u1 và d.
Constraints
2<=n<=10000; 1<=u1,d<=10^6;
Output Format
In ra tổng của cấp số cộng

Sample Input 0
3646 662 114

Sample Output 0
759924842

*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long n, u1, d;
    long long  un, sum;
    cin >> n >> u1 >> d;

    un = u1 + (n-1)*d;
    sum = n*(u1 + un)/2;

    cout << sum << endl;
    
    return 0;
}
