/*
Cho số nguyên dương N, hãy viết vòng lặp for để

In ra các số nguyên dương chia hết cho 3 <= N (sử dụng bước nhảy = 3)
In ra các số nguyên không âm chia hết cho cả 3 và 5 < N
Số nhỏ nhất >= N chia hết cho 7 (sử dụng break và for khuyết điều kiện lặp)
for(int i = n; ; i++){
    //Nếu i chia hết cho 7 thì in ra và break
}
Số lớn nhất <= N chia hết cho 9 (sử dụng break)
for(int i = n; i >= 0; i--){
    //Nếu i chia hết cho 9 thì dừng
}
In ra dãy số : 1, 3, 5, 7, 9 .... 2N - 1
Input Format

Dòng duy nhất chứa N
Constraints

10<=N<=1000
Output Format

In ra 5 dòng đáp án của 5 yêu cầu trên

Sample Input 0

37
Sample Output 0

3 6 9 12 15 18 21 24 27 30 33 36 
0 15 30 
42
36
1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49 51 53 55 57 59 61 63 65 67 69 71 73 
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;
    cin >> n;
    for(int i = 3; i <=n; i+=3)
        cout << i << " ";
    cout << endl;
    for(int i = 0; i < n; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    for(int i = n; ; i++)
    {
        if(i % 7 == 0)
        {
            cout << i << endl;
            break;
        }
    }
    for(int i = n; i >= 0; i--)
    {
        if(i % 9 == 0)
        {
            cout << i << endl;
            break;        
            }
    }
    for(int i = 1; i <=2*n-1; i+=2)
        cout << i << " ";
    return 0;
}