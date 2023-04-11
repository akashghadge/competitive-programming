#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int mx = 0, mn = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '?' and b[i] == '?')
        {
            mx++;
        }
        else if (b[i] == '?' or a[i] == '?')
        {
            mx++;
        }
        else
        {
            if (a[i] == b[i])
            {
            }
            else
            {
                mn++;
                mx++;
            }
        }
    }
    cout << mn << " " << mx << endl;
}