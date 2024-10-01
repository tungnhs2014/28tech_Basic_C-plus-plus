#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int *a = new int[100000000]; // cap phat dong: Heap
    int b[100]; // cap phat tinh: Stack
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> *(a + i);
    }

    for(int i = 0; i < n; i++)
    {
        cout << *(a + i) << " ";
    }

    delete []a;
    return 0;
}
