
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vector<ll> cnt(n + 1);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    cnt[x]++;
  }
  ll ans = 0;
  for (int i = 2; i < n; i++) {
    ans += cnt[i - 1] * cnt[i] * cnt[i + 1];
  }
  for (int i = 1; i < n; i++) {
    ans += cnt[i] * (cnt[i] - 1) / 2 * cnt[i + 1];
  }
  for (int i = 2; i <= n; i++) {
    ans += cnt[i - 1] * cnt[i] * (cnt[i] - 1) / 2;
  }
  for (int i = 2; i < n; i++) {
    ans += cnt[i - 1] * cnt[i + 1] * (cnt[i + 1] - 1) / 2;
  }
  for (int i = 2; i < n; i++) {
    ans += cnt[i + 1] * cnt[i - 1] * (cnt[i - 1] - 1) / 2;
  }
  for (int i = 1; i <= n; i++) {
    ans += cnt[i] * (cnt[i] - 1) * (cnt[i] - 2) / 6;
  }
  cout << ans << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}




/*******************FOR HARD VERSION**************/
/*
The key idea that allows us to move from the previous version to this one is that the values of the numbers themselves are not important to us. The main idea is to consider all numbers in the interval [x,x+k]
.

Let's also, as in the previous version, iterate over the minimum element x
 in the tuple. Now let's find the count of numbers cnt
 that lie in the interval [x,x+k]
 (this can be done with a binary search, two pointers, or prefix sums using an array of occurrences). Then it remains to add to the answer the number of ways to choose m−1
 numbers from cnt−1
 (we fixed one of the numbers as the minimum). You have to sum these values over all possible values of x
 (even the same) because now you are not fixing the value of the minimum element (as in the previous problem), but its index in the sorted array.

To calculate binomial coefficients quickly, you can pre-compute all factorial values and all 1n!
 values by modulo. If you do not know how to calculate the inverse element by modulo, then you could pre-compute the part of Pascal's triangle in O(nm)
.


*/

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int N = 300500;
const int mod = 1000000007;
ll fact[N];
ll invFact[N];

ll fast_pow(ll a, ll p)
{
    ll res = 1;
    while (p)
    {
        if (p % 2 == 0)
        {
            a = (a * a) % mod;
            p /= 2;
        }
        else
        {
            res = (res * a) % mod;
            p--;
        }
    }
    return res;
}

ll C(int n, int k)
{
    if (k > n)
    {
        return 0;
    }
    return fact[n] * invFact[k] % mod * invFact[n - k] % mod;
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> v(n);
    for (ll &e : v)
    {
        cin >> e;
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        int l = i + 1;
        int r = upper_bound(v.begin(), v.end(), v[i] + k) - v.begin();
        ans = (ans + C(r - l, m - 1)) % mod;
    }
    cout << ans << "\n";
}

int main()
{
    fact[0] = invFact[0] = 1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = (fact[i - 1] * i) % mod;
        invFact[i] = fast_pow(fact[i], mod - 2);
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
