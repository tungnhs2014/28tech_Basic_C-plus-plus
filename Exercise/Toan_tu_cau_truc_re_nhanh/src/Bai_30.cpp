/*
Trong lớp có n sinh viên, muốn chọn ra 2 bạn sinh viên để tham gia cuộc thi khiêu vũ, hỏi có bao nhiêu cách?

Input Format
Số lượng sinh viên trong lớp N.

Constraints
1<=N<=10^6

Output Format
In ra kết quả của bài toán
Sample Input 0
4
Sample Output 0
6

*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long n;
    cin >> n;
    cout << n*(n-1)/2;
    return 0;
}


