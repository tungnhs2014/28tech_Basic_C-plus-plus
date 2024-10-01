#include <bits/stdc++.h>
using namespace std;

// FIFO: fist in frist out

int main(int argc, char const *argv[])
{
    queue <int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.size() << endl;
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << q.empty() << endl;
    return 0;
}
