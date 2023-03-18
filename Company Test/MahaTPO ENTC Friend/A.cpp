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
    int n = str.size();
    vector<int> isGood(n, 1);
    vector<int> left(26, -1);
    vector<int> right(26, -1);
    bool f = 1;
    int i = 0, j = n - 1;
    while (i < n and j >= 0)
    {
        char ch1 = str[i];
        char ch2 = str[j];
        if (f)
        {
            if (left[ch1 - 'a'] != -1 and isGood[i])
            {
                isGood[left[ch1 - 'a']] = 0;
                left[ch1 - 'a'] = i;
                f = 0;
            }
            else if (isGood[i])
            {
                left[ch1 - 'a'] = i;
            }
            i++;
        }
        else
        {
            if (right[ch2 - 'a'] != -1 and isGood[j])
            {
                isGood[right[ch2 - 'a']] = 0;
                right[ch2 - 'a'] = j;
                f = 1;
            }
            else if (isGood[j])
            {
                right[ch2 - 'a'] = j;
            }
            j--;
        }
    }
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (isGood[i])
            ans += str[i];
    }
    if (!f)
        reverse(ans.begin(), ans.end());
    cout << ans << endl;
}