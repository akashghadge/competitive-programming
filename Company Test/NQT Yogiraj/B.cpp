#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
bool valid(int i, int j, int n, int m, string str)
{
    for (auto ch : str)
    {
        if (ch == 'R')
            j++;
        else if (ch == 'L')
            j--;
        else if (ch == 'F')
            i--;
        else
            i++;
        if (i < 0 or j < 0 or i >= n or j >= m)
            return false;
    }
    return true;
}
bool sol(int n, int m, string str)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (valid(i, j, n, m, str))
                return true;
        }
    }
    return false;
}
int main()
{
    int n, m;
    string str;
    cin >> n >> m >> str;
    sol(n, m, str) ? cout << "Safe" : cout << "Unsafe";
    cout << endl;
}