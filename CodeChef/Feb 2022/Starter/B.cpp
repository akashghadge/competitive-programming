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
long long invertBits(long long num)
{
    long long temp = num;
    temp |= temp >> 1;
    temp |= temp >> 2;
    temp |= temp >> 4;
    temp |= temp >> 8;
    temp |= temp >> 16;

    return (num ^ temp);
}
long long sol(long long n)
{
    int ptr = 1;
    while (true)
    {
        long long n1 = n + ptr;
        long long n2 = invertBits(n1);
        if (n1 == n || n1 == n2 || n == n2 || n1 == 0 || n2 == 0 || n == 0)
        {
            ptr++;
            continue;
        }
        cout << n << " " << n1 << " " << n2 << en;
        break;
    }
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