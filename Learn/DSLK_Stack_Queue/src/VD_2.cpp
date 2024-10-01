#include <bits/stdc++.h>
#include <stack>
using namespace std;

// LIFO

int main(int argc, char const *argv[])
{
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.size() << endl;
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.empty() << endl;
    return 0;
}
