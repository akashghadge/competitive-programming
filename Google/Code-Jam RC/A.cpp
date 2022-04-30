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
/*input sections*/
int n;
v<string> arr;
void input()
{
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
bool valid(string str)
{
    vi mp(26, 0);
    char prev = str[0];
    mp[prev - 'A'] = 1;
    for (int i = 1; i < str.size(); i++)
    {
        while (i < str.size() && prev == str[i])
            i++;
        if (i < str.size())
            prev = str[i];
        else
            break;

        if (mp[prev - 'A'] == 0)
            mp[prev - 'A'] = 1;
        else
            return false;
    }
    return true;
}
void print_google(int num, string ans)
{
    cout << "Case #" << num << ": " << ans << en;
}
int curr = 1;
void sol()
{
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}