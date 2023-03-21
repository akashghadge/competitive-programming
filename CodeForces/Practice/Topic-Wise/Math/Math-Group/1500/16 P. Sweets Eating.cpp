#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> val(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> val[i];
    }

    sort(val.begin(), val.end());

    vector<long long> ans(n);

    long long curSum = 0;

    for (int i = 0; i < n; ++i)
    {
        curSum += val[i];
        ans[i] = curSum;

        if (i >= m)
        {
            ans[i] += ans[i - m];
        }

        cout << ans[i] << (i == n - 1 ? '\n' : ' ');
    }

    return 0;
}
