/*Cho một dãy số nguyên chưa biết số lượng phần tử, hãy dếm tần xuất hiện của các số nguyên tố trong đãy 
và in ra theo thứ tự xuất hiện trong dãy 
Input:
Gồm nhiều dòng chứa các số nguyên trong dãy
Constraints
Dãy không quá 10000 số nguyên không âm. Các số trong dãy là số nguyên âm không quá 10^9
Output:
In ra các số nguyên tố trong dãy kèm theo tần suất của nó
Sample Input:
2 3 5 3 2 4 5 1
Sample Output:
2 2 
3 2
5 2

*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool nt(ll n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    return n > 1;
}

int main(int argc, char const *argv[])
{
    vector <int> v;
    int x;
    while (cin >> x)
    {
        if(nt(x))
        {
            v.push_back(x);
        }
    }
    int b[v.size()] = {0};
    for(int i = 0; i < v.size(); i++)
    {
        if(b[i] == 0)
        {
            int dem = 1;
            for(int j = i + 1; j < v.size(); j++)
            {
                if(v[i] == v[j])
                {
                    dem++;
                    b[j] = 1;
                }
            }
            cout << v[i] << ' ' << dem << endl;
        }
    }
    return 0;
}
 