#include <bits/stdc++.h>
using namespace std;
vector<int> help(int n)
{
    vector<int> ans;
    vector<int> prime(n + 1, 1);
    for (int num = 2; num * num <= n; num++)
    {
        if (prime[num] == true)
        {
            for (int i = num * num; i <= n; i += num)
                prime[i] = false;
        }
    }

    for (int num = 2; num <= n; num++)
        if (prime[num])
            ans.push_back(num);
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    vector<int> primes = help(m);
    int sum = 0;
    for (auto val : primes)
    {
        if (n <= val and val <= m)
        {
            sum += val;
        }
    }
    for (int i = 1; i <= sum; i++)
    {
        if (sum % i == 0)
            cout << i << " ";
    }
    cout << endl;
}