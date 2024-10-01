/*
Nhiệm vụ của bạn ở bài tập này là sinh ra các xâu chỉ bao gồm 2 kí tự A và B theo thứ tự từ điển giảm dần.
Intput:
1 dòng duy nhất chứa số nguyên dương N là độ dài của xâu
Constraints
1 <= N <= 10

Output:
In ra các xâu AB, mỗi xâu in trên 1 dòng

Sample input 0:
3
Sample output 0:
BBB
BBA
BAB
BAA
ABB
ABA
AAB
AAA
*/

#include <bits/stdc++.h>
using namespace std;

int n, a[100];
int check;

void ktao(){
    for(int i = 1; i <= n; i++) a[i] = 0;
}

void sinh()
{
    int i = n;
    while(i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        --i;
    }
    if(i == 0) check = 0;
    else a[i] = 1;
}
int main(int argc, char const *argv[])
{
    cin >> n;
    ktao();
    check = 1;
    while(check)
    {
        for(int i = 1; i <= n; i++)
        {
            if(a[i] == 1) cout << 'A';
            else cout << 'B';
        }
        cout << endl;
        sinh();
    }
    return 0;
}
