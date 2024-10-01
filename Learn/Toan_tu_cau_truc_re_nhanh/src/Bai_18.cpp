/*
Cho kí tự c, nếu kí tự c là chữ cái in thường thì chuyển nó thành chữ cái in hoa tương ứng và ngược lại 
nếu c là chữ cái in hoa thì chuyển nó thành chữ cái in thường tương ứng. 
Trường hợp kí tự nhập vào không phải là chữ cái thì không thay đổi nó.

Gợi ý :

if(c là in hoa){
    
}
else if(c là in thường){
    
}
cout << c << endl;
Input Format

1 dòng chứa kí tự c

Constraints

c có thể là chữ in hoa, in thường, chữ số hoặc kí tự đặc biệt.

Output Format

In ra kết quả theo yêu cầu

Sample Input 0

e
Sample Output 0

E
Sample Input 1

$
Sample Output 1

$
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char c; cin >> c;
    if(c >= 'A' && c <= 'Z')
    {
        c = c + 32;
        cout << c << endl;
    }
    else if(c >= 'a' &&  c <= 'z')
    {
        c = c - 32;
        cout << c << endl;
    }
    else
        cout << c << endl;
        
    return 0;
}
