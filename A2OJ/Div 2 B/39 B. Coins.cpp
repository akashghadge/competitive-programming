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
vi factors(int num)
{
    vi res;
    int i = 1;
    while (i * i <= num)
    {
        if (num % i == 0)
        {
            res.push_back(i);
            // Handle the case explained in the 4th
            if (num / i != i)
            {
                res.push_back(num / i);
            }
        }
        i++;
    }
    return res;
}
void sol(int n)
{
    vi facts = factors(n);
    sort(facts.begin(), facts.end(), greater<int>());
    int prev = -1;

    for (int i = 0; i < facts.size(); i++)
    {
        if (prev == -1 || prev % facts[i] == 0)
        {
            cout << facts[i] << " ";
            prev = facts[i];
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
    int n;
    cin >> n;
    sol(n);
    return 0;
}