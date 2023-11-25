/*

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll combine(vector<ll> &arr, ll l, ll mid, ll r)
{
    vector<ll> temp(r - l + 1);
    int k = 0;
    int i = l;
    int j = mid + 1;
    ll inv = 0;
    while (i <= mid and j <= r)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inv += (mid - i + 1);
        }
    }
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= r)
    {
        temp[k++] = arr[j++];
    }
    for (int id = l; id <= r; id++)
    {
        arr[id] = temp[id - l];
    }
    return inv;
}
ll m_sort(vector<ll> &arr, ll l, ll h)
{
    ll cn = 0;
    if (l >= h)
    {
        return cn;
    }
    ll mid = l + (h - l) / 2;
    cn += m_sort(arr, l, mid);
    cn += m_sort(arr, mid + 1, h);
    cn += combine(arr, l, mid, h);
    return cn;
}
long long int invC(vector<ll> &arr, long long N)
{
    ll ans = m_sort(arr, 0, N - 1);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<ll> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<ll> temp = arr;
    int normal = invC(arr, n);
    for (auto &val : temp)
    {
        val = -val;
    }
    int rev = invC(temp, n);
    cout << min(rev, normal) << endl;
}