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
/*input sections*/
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
unordered_map<string, int> mp;
int getNum(string str)
{
    vector<string> curr = tokenize(str, "c");
    int ans = 0;
    for (auto val : curr)
    {
        if (mp.find(val) == mp.end())
            return -1;
        ans *= 10;
        ans += mp[val];
    }
    return ans;
}
void sol()
{
    mp["zero"] = 0;
    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;
    mp["four"] = 4;
    mp["five"] = 5;
    mp["six"] = 6;
    mp["seven"] = 7;
    mp["eight"] = 8;
    mp["nine"] = 9;
    stack<string> op;
    stack<int> nums;
    string str;
    getline(cin, str);
    vector<string> afterSpace = tokenize(str, " ");
    for (auto val : afterSpace)
    {
        // cout << val << " ";
        if (val == "add")
        {
            op.push(val);
        }
        else if (val == "sub")
        {
            op.push(val);
        }
        else if (val == "mul")
        {
            op.push(val);
        }
        else if (val == "div")
        {
            op.push(val);
        }
        else if (val == "rem")
        {
            op.push(val);
        }
        else
        {
            int curr = getNum(val);
            if (curr == -1)
            {
                cout << "expression evaluation stopped invalid words present" << endl;
                return;
            }
            else if (nums.size() >= 1 and op.size() == 0)
            {
                cout << "expression is not complete or invalid" << endl;
                return;
            }
            else if (nums.size() == 0)
            {
                nums.push(curr);
            }
            else
            {
                string lastOp = op.top();
                op.pop();
                int lastNum = nums.top();
                nums.pop();
                int res = 0;
                if (lastOp == "add")
                {
                    res = lastNum + curr;
                }
                else if (lastOp == "sub")
                {
                    res = lastNum - curr;
                }
                else if (lastOp == "mul")
                {
                    res = lastNum * curr;
                    cout << "hello" << endl;
                }
                else if (lastOp == "div")
                {
                    res = lastNum / curr;
                }
                else if (lastOp == "rem")
                {
                    res = lastNum % curr;
                }
                nums.push(res);
            }
        }
        // if (nums.size())
        //     cout << nums.size() << " " << nums.top();
        // cout << endl;
    }
    if (op.size() == 0 and nums.size() == 1)
    {
        cout << nums.top() << endl;
        return;
    }
    cout << "expression is not complete or invalid" << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    // cin >> T;
    while (T--)
    {
        sol();
    }
    return 0;
}