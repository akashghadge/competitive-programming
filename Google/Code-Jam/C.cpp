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
string sol(vi arr, int n)
{
    sort(arr.begin(), arr.end());
    int ans = 1;
    int i = 0;
    while (i < n)
    {
        if (ans <= arr[i])
        {
            ans++;
        }
        i++;
    }
    return to_string(ans - 1);
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
        int N;
        cin >> N;
        vi arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        print_google(curr, sol(arr, N));
        curr++;
    }
    return 0;
}