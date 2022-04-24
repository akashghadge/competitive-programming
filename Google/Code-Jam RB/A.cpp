#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<ll>
#define vll vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll, ll>
#define vpi vector<pair<ll, ll>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
/*input sections*/
ll n;
deque<ll> arr;
void input()
{
    cin >> n;
    arr.resize(n, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void print_google(int num, string ans)
{
    cout << "Case #" << num << ": " << ans << en;
}
int ptr = 1;
void sol()
{
    ll max_curr = INT_MIN;
    ll ans = 0;
    while (arr.size())
    {
        if (arr.front() < arr.back())
        {
            if (arr.front() >= max_curr)
            {
                ans++;
                max_curr = arr.front();
            }
            arr.pop_front();
        }
        else
        {
            if (arr.back() >= max_curr)
            {
                ans++;
                max_curr = arr.back();
            }
            arr.pop_back();
        }
    }
    print_google(ptr, to_string(ans));
    ptr++;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    ll T = 1;
    cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}