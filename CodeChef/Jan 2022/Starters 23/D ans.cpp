#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll z = 1000000007;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    arr[0] = 1;

    for (int i = 1; i < n; i++)
    {
        int req_xor = i + 1;
        int req_ele = (req_xor ^ i);
        arr[i] = req_ele;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
