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
string sol(string num)
{
    ll sum = 0;
    for (auto ch : num)
        sum += (ch - '0');
    if (sum % 9 == 0)
    {
        num.push_back('0');
        return num;
    }
    else
    {
        int need = sum % 9;
        need = 9 - need;
        int n = num.size();
        int i = n - 1;
        for (i = 0; i < n; i++)
        {
            int curr = num[i] - '0';
            if (need < curr)
            {
                break;
            }
        }
        if (i == 0)
        {
            char temp = '0' + need;
            string ans = (temp + num);
            return ans;
        }
        num.insert(num.begin() + i, '0' + need);
        return num;
    }
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
        string n;
        cin >> n;
        print_google(curr, sol(n));
        curr++;
    }
    return 0;
}