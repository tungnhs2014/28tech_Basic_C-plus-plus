#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int dx[8] = {-1, -1, -1 ,0, 0, 1, 1 ,1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(int argc, char const *argv[])
{
    int i = 3, j = 4;
    for(int k = 0; k < 8; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];

        cout << i1 << ' ' << j1 << endl;
    }
    return 0;
}
