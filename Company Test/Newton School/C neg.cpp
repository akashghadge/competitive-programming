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
void sol(int n)
{
    if (n % 2 == 0)
    {
        int req_sum_xor = n / 2;
        int a1 = 0;
        int a2 = 0;
        bool flag = false;
        for (int i = 1; i < req_sum_xor; i++)
        {
            int temp = (i ^ req_sum_xor);
            if (temp > 0 && temp < req_sum_xor && temp + i == req_sum_xor)
            {
                a1 = i;
                a2 = temp;
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << a1 << " " << a2 << " " << req_sum_xor << en;
            return;
        }
    }
    else
    {
        int req_sum_xor = n / 2;
        int a1 = 0;
        int a2 = 0;
        bool flag = false;
        for (int i = 1; i < req_sum_xor + 1; i++)
        {
            int temp = (i ^ req_sum_xor);
            if (temp > 0 && temp < req_sum_xor + 1 && temp + i == req_sum_xor + 1)
            {
                a1 = i;
                a2 = temp;
                flag = true;
            }
        }
        if (flag)
        {
            cout << a1 << " " << a2 << " " << req_sum_xor + 1 << en;
            return;
        }
    }
    cout << -1 << en;
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
        sol(n);
    }
    return 0;
}