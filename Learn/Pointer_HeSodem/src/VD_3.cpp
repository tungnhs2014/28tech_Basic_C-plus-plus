#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    unsigned int a = 23; // 10111
    unsigned int b = 9; // 1001
    unsigned int c = a | b;
    unsigned int d = a ^ b;
    unsigned int e = ~a;
    unsigned int f = a << 1; // a dich trao 1 bit


    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;



    return 0;
}
