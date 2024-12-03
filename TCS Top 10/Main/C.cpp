#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string str;
    cin >> str;
    int k, n = str.size();
    cin >> k;
    bool flag = 1;
    for (int i = k - 1; i >= 0; i--)
    {
        int mx = str[i] - '0';
        for (int j = i; j < n; j += k)
        {
            if ((str[j] - '0') > mx)
            {
                mx = str[j] - '0';
            }
        }
        if (mx != (str[i] - '0') and flag)
        {
            flag = 0;
        }
    }

    if (flag)
    {
        for (int i = 0; i < k; i++)
        {
            for (int j = i + k; j < n; j += k)
            {
                str[j] = str[i];
            }
        }
    }
    else
    {
        int i;
        for (i = k - 1; i >= 0; i--)
        {
            if (str[i] != '9')
                break;
        }
        str[i]++;
        for (int m = i + 1; m < k; m++)
            str[m] = '0';
        for (int i = 0; i < k; i++)
        {
            for (int j = i + k; j < n; j += k)
            {
                str[j] = str[i];
            }
        }
    }
    cout << str << endl;
}