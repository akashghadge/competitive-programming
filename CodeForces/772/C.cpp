#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<long long>
#define vll vector<ll>
#define vii vector<vector<long long>>
#define pii pair<long long, long long>
#define vpi vector<pair<long long, long long>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
void sol(vi arr, long long n)
{

    // edge cases
    if (n == 3)
    {
        if (arr[0] <= arr[1] && arr[1] <= arr[2])
        {
            cout << 0 << en;
        }
        else if (arr[n - 2] <= arr[n - 1])
        {
            cout << 1 << en;
            cout << "1 2 3" << en;
        }
        else
        {
            cout << -1 << en;
        }
        return;
    }
    if (arr[n - 2] > arr[n - 1])
    {
        cout << -1 << en;
        return;
    }

    // genaral
    long long ans = 0;
    string oper = "";
    ll last = arr[n - 1];
    ll second_last = arr[n - 2];
    for (int i = n - 3; i >= 0; i--)
    {
        if (arr[i] > second_last)
        {
            arr[i] = second_last - last;
            // out's bound
            if (abs(arr[i]) >= (ll)1e18)
            {
                cout << -1 << en;
                return;
            }
            ans++;
            oper += to_string(i + 1) + " " + to_string(i + 2) + " " + to_string(i + 3) + "\n";
        }
        last = second_last;
        second_last = arr[i];
        // cout << arr[i] << en;
    }
    cout << ans << en;
    cout << oper;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    long long T;
    cin >> T;
    while (T--)
    {
        long long N;
        cin >> N;
        vi arr(N);
        for (long long i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        sol(arr, N);
    }
    return 0;
}