#include <bits/stdc++.h>
using namespace std;
int mod = 26;
void help(vector<int> arr, vector<int> &ans, int d, int k, int steps)
{
    if (steps == k)
    {
        if (arr < ans)
            ans = arr;
        return;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        vector<int> temp = arr;
        temp[i] = (temp[i] + d) % mod;
        help(temp, ans, d, k, steps + 1);
    }
    help(arr, ans, d, k, steps + 1);
}
string calculateString(int N, string str, int D, int K)
{
    vector<int> arr;
    for (auto ch : str)
    {
        arr.push_back(ch - 'a');
    }
    vector<int> ans = arr;
    help(arr, ans, D, K, 0);
    string res = "";

    for (int i = 0; i < N; i++)
        res.push_back('a' + ans[i]);
    return res;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int N, d, k;
    string str;
    cin >> N >> str >> d >> k;
    cout << calculateString(N, str, d, k) << endl;
    return 0;
}