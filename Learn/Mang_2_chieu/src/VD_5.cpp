#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int dx[4] = {-1, 0, 0 ,1};
int dy[4] = {0, -1, 1 ,0};

pair<int, int> move1[4] = {
    {-1, 0}, {0, -1}, {0, 1}, {1, 0}
};

int main(int argc, char const *argv[])
{
    int i = 3, j = 4;
    for(int k = 0; k < 4; k++)
    {
        int i1 = i + move1[k].first;
        int j1 = j + move1[k].second;

        cout << i1 << ' ' << j1 << endl;
    }
    return 0;
}
