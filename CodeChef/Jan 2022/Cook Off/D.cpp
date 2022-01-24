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
int MAX_SIZE = 1e5;
vector<int> isPrime(MAX_SIZE, true);
vector<int> primes;
void init()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < MAX_SIZE; i++)
    {
        for (int j = i + i; j < MAX_SIZE; j += i)
        {
            isPrime[j] = false;
        }
    }
    for (int i = 2; i < MAX_SIZE; i++)
    {
        if (isPrime[i])
            primes.push_back(i);
    }
}
int sol(int n)
{
    if (n == 1)
    {
        cout << "1" << en;
    }
    else if (n == 2)
    {
        cout << 2 << " " << 3 << en;
    }
    int ptr = 1;
    for (int i = 1; i <= n;)
    {
        if (i % 2 == 0)
        {
            cout << i << en;
            i++;
        }
        else
        {
            cout << i * 2 << en;
        }
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
    init();
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