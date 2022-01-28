#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<long long>
#define vii vector<vector<long long>>
#define vll vector<ll>
#define ll long long
#define v vector
#define pii pair<long long, long long>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
void sol(long long n)
{
    bool flag = 0;
    if (n % 2 == 0)
    {
        long long ptr = 1;
        long long req_sum = n / 2;
        while (ptr <= req_sum)
        {
            long long third = ptr ^ req_sum;
            long long x = third ^ ptr ^ req_sum;
            if (third + req_sum + ptr == n && x == 0)
            {
                cout << ptr << " " << third << " " << req_sum << en;
                flag = 1;
                break;
            }
            ptr <<= 1;
        }
    }
    if (!flag)
        cout << -1 << en;
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
        long long n;
        cin >> n;
        sol(n);
    }
    return 0;
}