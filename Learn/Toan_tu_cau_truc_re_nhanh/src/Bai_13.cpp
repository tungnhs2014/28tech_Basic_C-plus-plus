/*
Cho trước N ngày, hãy đổi N thành số năm, số tuần và số ngày. Biết rằng một năm có 365 ngày.

Input Format

Số nguyên không âm N

Constraints

0<=N<=1000000

Output Format

In ra số năm, tuần, ngày tương ứng với N ngày

Sample Input 0

373
Sample Output 0

1 1 1
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int N; cin >> N;
    int Year = N / 365;
    int week = (N % 365)/7;
    int day = N - Year*365 - week*7;
    cout << Year << " " << week << " " << day;
    return 0;
}
