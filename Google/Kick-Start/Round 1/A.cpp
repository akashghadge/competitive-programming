#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<int>
#define vll vector<ll>
#define vii vector<vector<int>>
#define pii pair<int, int>
#define vpi vector<pair<int, int>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
void print_google(int num, string ans)
{
    cout << "Case #" << num << ": " << ans << en;
}
int sol(string str, string curr)
{
    int i = 0, j = 0;
    int ans = 0;
    while (i < str.size() && j < curr.size())
    {
        if (str[i] == curr[j])
            i++, j++;
        else
            j++, ans++;
    }
    if (j != curr.size())
        ans += (curr.size() - j);
    if (i == str.size())
        return ans;
    else
        return -1;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T;
    cin >> T;
    int curr = 1;
    while (T--)
    {
        string str, temp;
        cin >> str >> temp;
        int ans = sol(str, temp);
        if (ans == -1)
            print_google(curr, "IMPOSSIBLE");
        else
            print_google(curr, to_string(ans));
        curr++;
    }
    return 0;
}