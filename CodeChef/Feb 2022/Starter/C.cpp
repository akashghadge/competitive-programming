#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define v vector
#define pii pair<int, int>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

bool compare(auto p1, auto p2)
{
    return p1.second > p2.second;
}
void sol(string str, int n)
{
    if (n % 2 != 0)
    {
        cout << "No" << en;
        return;
    }

    unordered_map<char, int> mp;
    for (auto ch : str)
    {
        mp[ch]++;
    }
    for (auto val : mp)
    {
        if (val.second > (n / 2))
        {
            cout << "No" << en;
            return;
        }
    }
    string ans1 = "";
    string ans2 = "";
    priority_queue<pair<char, int>> pq;
    for (auto val : mp)
    {
        pq.push(make_pair(val.second, val.first));
    }

    int ptr = 0;
    pair<int, char> prev;
    string ans(n, ' ');
    while (!pq.empty())
    {
        pair<int, char> p = pq.top();
        pq.pop();
        if (ptr % 2 == 0)
        {
            ans1 += p.second;
            p.first--;
        }
        else
        {
            ans2 += p.second;
            p.first--;
        }
        if (prev.first > 0)
            pq.push(prev);
        prev = p;
        ptr++;
    }

    // output if yes
    cout << "Yes" << en;
    reverse(ans2.begin(), ans2.end());
    cout << ans1 + ans2 << en;
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
    while (T--)
    {
        int n;
        string str;
        cin >> n >> str;
        sol(str, n);
    }
    return 0;
}