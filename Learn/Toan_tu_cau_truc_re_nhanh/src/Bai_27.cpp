/*
Cho một số thực a, hãy tìm số nguyên gần a nhất. Trong trường hợp phần thực của a = 0.5 thì làm tròn lên

Input Format

Số thực a

Constraints

0<=a<=10^6

Output Format

Số nguyên gần với a nhất

Sample Input 0

15.2
Sample Output 0

15
*/
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    double a;
    cin >> a;
    if(abs(a - (int)a < 0.5))
        cout << (int)a;
    else
        cout << (int)a + 1;
    return 0;
}

