/*
Cho số tự nhiên m và số nguyên s không âm. Nhiệm vụ của bạn là tìm số bé nhất và lớn nhất có m chữ số và tổng chữ số bằng s.

Input Format

Một dòng gồm 2 số m và s

Constraints

1 ≤ m ≤ 100;  0 ≤ s ≤ 900

Output Format

In ra số bé nhất, lớn nhất có thể đạt được, mỗi số in ra trên 1 dòng. Nếu không có đáp án thì in ra 1 dòng "NOT FOUND".

Sample Input 0

2 15
Sample Output 0

69
96
Sample Input 1

2 30
Sample Output 1

NOT FOUND
*/


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    int m, s; cin >> m >> s;
    if(9 * m < s || s == 0 && m > 1)
    {
        cout << "NOT FOUND\n";
    }
    else{
        int be[m], lon[m];
        int tmp = s;
        for(int i = 0; i < m; i++)
        {   
            if(s >= 9){
                lon[i] = 9; s -= 9;
            }
            else{
                lon[i] = s; s = 0;
            }
        }
        --tmp;
        for(int i = m -1; i >= 0; i--)
        {
            if(tmp >= 9)
            {
                be[i] = 9; tmp -= 9;
            }
            else{
                be[i] = tmp; tmp = 0;
            }
        }
        be[0] += 1;
        for(int i = 0; i < m; i++) cout << be[i];
        cout << endl;
        for(int i = 0; i < m; i++) cout << lon[i];

    }
    return 0;
}
