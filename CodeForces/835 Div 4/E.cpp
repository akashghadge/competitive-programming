/*

*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll temp_sort(ll main_arr[], ll temp[], ll left, ll right);
ll combine(ll main_arr[], ll temp[], ll left, ll mid,
         ll right);

ll mergeSort(ll main_arr[], ll array_size)
{
    ll temp[array_size];
    return temp_sort(main_arr, temp, 0, array_size - 1);
}

ll temp_sort(ll main_arr[], ll temp[], ll left, ll right)
{
    ll mid, ic = 0;
    if (right > left)
    {
        mid = (right + left) / 2;
        ic += temp_sort(main_arr, temp, left, mid);
        ic += temp_sort(main_arr, temp, mid + 1, right);
        ic += combine(main_arr, temp, left, mid + 1, right);
    }
    return ic;
}

ll combine(ll main_arr[], ll temp[], ll left, ll mid,
         ll right)
{
    ll i, j, k;
    ll ic = 0;

    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right))
    {
        if (main_arr[i] <= main_arr[j])
        {
            temp[k++] = main_arr[i++];
        }
        else
        {
            temp[k++] = main_arr[j++];
            ic = ic + (mid - i);
        }
    }
    while (i <= mid - 1)
        temp[k++] = main_arr[i++];
    while (j <= right)
        temp[k++] = main_arr[j++];
    for (i = left; i <= right; i++)
        main_arr[i] = temp[i];

    return ic;
}
void solve()
{
    ll n;
    cin >> n;
    ll main_arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> main_arr[i];
    }
    ll co = 0;
    ll cz = 0;
    for (ll i = 0; i < n / 2; i++)
    {
        if (main_arr[i])
            co++;
    }
    for (ll i = n / 2; i < n; i++)
    {
        if (!main_arr[i])
            cz++;
    }
    if (n % 2 == 0 and co == (n / 2) and cz == (n / 2))
    {
        cout << mergeSort(main_arr, n) << endl;
        return;
    }
    ll zeros = 0;
    ll ones = 0;
    for (ll i = 0; i < n; i++)
    {
        if (!main_arr[i])
            zeros++;
        else
            ones++;
    }
    ll left[n];
    for (ll i = 0; i < n; i++)
    {
        left[i] = main_arr[i];
    }
    ll right[n];
    for (ll i = 0; i < n; i++)
    {
        right[i] = main_arr[i];
    }

    for (ll i = 0; i < n; i++)
    {
        if (!left[i])
        {
            left[i] = 1;
            break;
        }
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (right[i])
        {
            right[i] = 0;
            break;
        }
    }
    ll l = mergeSort(left, n);
    ll r = mergeSort(right, n);
    cout << max(l, r) << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}