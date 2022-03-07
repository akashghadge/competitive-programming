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
bool prime[10005];
vector<int> primes;
int SIZE = 10005;
int power(int x, int y)
{
    int res = 1;

    while (y)
    {
        if (y % 2 == 1)
            res = (res * x);
        y = y >> 1;
        x = (x * x);
    }
    return res;
}
void SieveOfEratosthenes()
{
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int p = 2; p * p <= SIZE; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= SIZE; i += p)
                prime[i] = false;
        }
    }
    for (int i = 1; i < SIZE; i++)
    {
        if (prime[i])
            primes.push_back(i);
    }
}

int sol(int n)
{
    int ans = INT_MAX;
    for (int i = 0; i < primes.size(); i++)
    {
        for (int j = i + 1; j < primes.size(); j++)
        {
            if (n == power(primes[i], 2) + power(primes[j], 2))
                ans = min(ans, primes[i] + primes[j]);
        }
    }
    return ans == INT_MAX ? -1 : ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    SieveOfEratosthenes();
    int n;
    cin >> n;
    cout << sol(n) << en;
    return 0;
}