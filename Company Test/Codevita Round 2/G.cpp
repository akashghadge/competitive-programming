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
/*
10000
4236 4450 4550 4700 4500 4500 4500 4700 4400 4600 4600 5000 4600 4800 4600 4700 5200 4900 5500 4600 5100 5600 5200 5300 5000 4900 5000 4700 4800 4900 5200 6000 6200 6000 6200 6200 7300 7000 6800 6800 7000 6000 6200 6100 6200 6300 6000 5800 5500 5100 5400 6000 6200 6500 7300 6800 6500 7000 6300 6000 6000 6300 6500 6700 6700 6700 6800 7000 7200 7200 7500 7700 7500 7800 8200 9000 9700 9800 10300 11300 9700 9600 10700 11300 11400 10700 11000 11000 11000 12000 11600 12500 13700 14800 14600 14600 15500 15700 15100 17600 17000 16600 17100 16100 15700 17100 17900 18600 17400 16100 16600 16600 17500 17500 18000 20000 19500 19000 19300 19400
17800

1000
132 138 124 124 111 120 118 132 130 130 122 120 120 116 110 120 120 110 110 97 114 110 114 105 100 86 93 90 116 117 114 105 107 114 110 107 110 121 121 126 112 114 114 101 100 108 110 120 120 100 108 114 116 123 132 130 127 127 137 134 148 135 137 137 130 133 132 145 140 151 152 146 143 136 141 142 140 130 130 140 140 130 120 125 115 117 135 135 132 140 130 120 117 119 115 117 112 106 83 90 95 97 90 100 87 88 94 100 90 107 104 103 109 116 117 113 130 138 130 124
137
*/
float profit(int sold_price, int curr, int units, int months)
{
    float curr_profit = (sold_price - curr);
    curr_profit *= units;
    float gain = curr_profit / (curr * units);
    float curr_ans = (pow(gain + 1, 1.0 / (months)) - 1) * 100;
    return curr_ans;
}
float sol(vi arr, int n, int sold_price, int x)
{
    double ans = 0;
    int stocks = 0;
    int rem = 120;
    for (auto curr : arr)
    {
        float curr_ans = 0;
        if (curr >= x)
        {
            curr_ans = profit(sold_price, curr, 1, rem);
            stocks++;
        }
        else
        {
            int canbuy = (x / curr);
            if (abs(x - (canbuy * curr)) < abs(x - ((canbuy + 1) * curr)))
            {
                curr_ans = profit(sold_price, curr, canbuy, rem);
                stocks += canbuy;
            }
            else
            {
                curr_ans = profit(sold_price, curr, canbuy + 1, rem);
                stocks += canbuy + 1;
            }
        }
        // cout << curr_ans << en;
        ans += curr_ans;
        rem--;
    }
    cout << ans << en;
    return 0;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int x;
    cin >> x;
    int n = 120;
    vi arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << sol(arr, n, k, x) << en;

    return 0;
}