/*
Cho 3 cạnh a, b, c của một tam giác, nếu tam giác đã cho là tam giác đều thì in ra 1, tam giác cân thì in ra 2,
tam giác vuông thì in ra 3, tam giác thường in ra 4, trường hợp tam giác nhập vào không hợp lệ thì in ra "INVALID".

if(tam giác hợp lệ){
    //TH1 : kiểm tra đều
    //TH2 : Kiểm tra cân (3 trường hợp)
    //TH3 : Kiểm tra vuông (3 trường hợp)
    //else : Tam giác thường
}
else{
    cout << "INVALID\n";
}
Input Format

1 dòng chứa 3 số a, b, c.

Constraints

0<=a,b,c<=10^3

Output Format

In ra kết quả tương ứng.

Sample Input 0

8 8 8 
Sample Output 0

1
Sample Input 1

8 8 6
Sample Output 1

2
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a > 0 && b > 0 && c > 0 && (a +b > c) && (a +c > b) && (b + c > a))
    {
        if(a == b && b == c) 
            cout << 1 <<endl;
        else if(a== b || a == c  || b == c)
            cout << 2 << endl;
        else if((a*a == b*b + c*c) || (b*b== a*a+ c*c) || (c*c == a*a + b*b)) 
            cout << 3 << endl;
        else cout << 4 << endl;
    }
    else
        cout << "INVALID\n";
    return 0;
}
