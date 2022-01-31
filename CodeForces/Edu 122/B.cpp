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
    int sol(string str)
    {
        int removed = 0;
        int ones = 0;
        int zeros = 0;
        for (auto ch : str)
        {
            if (ch == '0')
                zeros++;
            else
                ones++;
            if (zeros < ones)
                removed = max(removed, zeros);
            else if (ones < zeros)
                removed = max(removed, ones);
        }
        return removed;
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
            string str;
            cin >> str;
            cout << sol(str) << en;
        }
        return 0;
    }