#include <bits/stdc++.h>
using namespace std;

vector<string> tokenize(string s, string del = " ")
{
    vector<string> ans;
    int start, end = -1 * del.size();
    do
    {
        start = end + del.size();
        end = s.find(del, start);
        ans.push_back(s.substr(start, end - start));
    } while (end != -1);
    return ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int bal, n;
    cin >> bal >> n;
    vector<int> curr;
    vector<pair<int, int>> commit;
    commit.push_back({bal, 0});
    while (n--)
    {
        string op;
        cin >> op;
        if (op == "read")
        {
            int ans = 0;
            for (auto val : commit)
            {
                ans += val.first;
            }
            ans += accumulate(curr.begin(), curr.end(), 0);
            cout << ans << endl;
        }
        else if (op == "credit")
        {
            int amount;
            cin >> amount;
            curr.push_back(amount); // Add credit transaction to current
        }
        else if (op == "debit")
        {
            int amount;
            cin >> amount;
            curr.push_back(-amount); // Add debit transaction to current
        }
        else if (op == "abort")
        {
            int txnIndex;
            cin >> txnIndex;
            int prevTran = 0;
            for (auto val : commit)
            {
                prevTran += val.second;
            }
            if (prevTran < txnIndex)
            {
                int localTxId = 0;
                for (int i = 0; i < (int)curr.size(); i++)
                {
                    if (curr[i] != 0)
                        localTxId++;
                    if ((localTxId + prevTran) == txnIndex)
                    {
                        curr[i] = 0;
                    }
                }
            }
        }
        else if (op == "rollback")
        {
            int commitIndex;
            cin >> commitIndex;
            curr.clear();
            while ((int)commit.size() > (commitIndex + 1))
                commit.pop_back();
        }
        else if (op == "commit")
        {
            int cn = 0;
            for (auto val : curr)
                if (val != 0)
                    cn++;
            commit.push_back({accumulate(curr.begin(), curr.end(), 0), cn});
            curr.clear();
        }
    }
    return 0;
}
