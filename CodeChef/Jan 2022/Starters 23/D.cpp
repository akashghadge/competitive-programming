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
vi ans;
// Function to find the maximum length array
void maxLengthArr(int x, int y)
{
    // To store if an element is
    // already taken or not
    bool ex[(1 << x)];

    // To store visited numbers
    ex[0] = 1;
    vector<int> pre({0});

    // For all possible values of pre[]
    for (int i = 1; i < (1 << x); i++)
    {

        // If it is already taken
        if (ex[i ^ y])
            continue;

        pre.push_back(i);
        ex[i] = 1;
    }

    // Not possible
    if (pre.size() == 1)
    {
        cout << "-1";
        return;
    }
    cout << pre.size() << endl;
    ans = pre;
    // // Print the array constructing it
    // // from the prefix-xor array
    // for (int i = 1; i < pre.size(); i++)
    //     cout << (pre[i] ^ pre[i - 1]) << " ";
}

// Driver code
void sol(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << (ans[i] ^ ans[i - 1]) << " ";
    }
    cout << en;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int X = 20, Y = 0;
    maxLengthArr(X, Y);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        sol(n);
    }
    return 0;
}
