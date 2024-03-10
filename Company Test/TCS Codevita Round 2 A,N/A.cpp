#include <bits/stdc++.h>
using namespace std;
vector<int> s(10), d(10), c(10);
int b;

int help(int id, int n, int currDamage, int currSize, vector<int> used)
{
    if (id == n)
    {
        return currDamage;
    }
    int ans1 = 0;
    if (!used[c[id]] && s[id] + currSize <= b)
    {
        // used it
        used[c[id]] = 1;
        ans1 = help(id + 1, n, currDamage + d[id], currSize + s[id], used);
        used[c[id]] = 0;
    }
    // go forward
    int ans2 = help(id + 1, n, currDamage, currSize, used);
    return max(ans1, ans2);
}
int main()
{
    int n = 10;
    for (int i = 0; i < n; i++)
        cin >> d[i];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
        cin >> c[i];
    cin >> b;
    // cout << n << " " << b << endl;
    vector<int> used(10, 0);
    cout << help(0, 10, 0, 0, used) << endl;
    return 0;
}
