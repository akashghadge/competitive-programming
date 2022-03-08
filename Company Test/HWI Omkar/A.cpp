#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int max_score = INT_MIN;
int score(vector<string> strs)
{
    int ans = 0;
    for (auto str : strs)
    {
        if (stoi(str) % 3 == 0)
            ans++;
    }
    return ans;
}
void help(string str, vector<string> curr)
{
    if (str.size() == 0)
    {
        max_score = max(score(curr), max_score);
        return;
    }
    for (int i = 1; i <= str.size(); i++)
    {
        string lp = str.substr(0, i);
        string rp = str.substr(i);
        curr.push_back(lp);
        help(rp, curr);
        curr.pop_back();
    }
}

int sol(string str, int n)
{
    vector<string> curr;
    help(str, curr);
    return max_score;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    string str;
    cin >> str;
    cout << sol(str, str.size()) << en;
    return 0;
}