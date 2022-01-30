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
bool valid(int n)
{
    int set_bits = 0;
    while (n)
    {
        if (1 & n)
            set_bits++;

        if (set_bits > 1)
            return false;
        n >>= 1;
    }
    return (set_bits == 1);
}
void test_case(int n)
{
    if (n == 2)
    {
        cout << "0 1" << en;
        return;
    }
    int i;
    for (i = n - 1; i > 0; i--)
    {
        if (valid(i))
        {
            cout << i << " 0 ";
            break;
        }
        else
            cout << i << " ";
    }
    i--;
    while (i > 0)
    {
        cout << i << " ";
        i--;
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
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        test_case(n);
    }
    return 0;
}