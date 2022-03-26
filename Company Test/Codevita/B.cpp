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
End 99 98 S(7) 96 95 94 93 92 91
81 82 L(99) 84 85 86 87 88 89 90
80 79 78 77 76 75 74 73 72 71
61 S(22) 63 64 65 66 67 68 69 70
60 59 58 S(14) 56 55 54 53 52 51
41 42 43 44 45 46 L(80) 48 49 50
40 39 38 37 36 35 34 33 32 31
21 22 23 L(63) 25 26 27 28 29 30
20 19 S(2) 17 16 15 14 13 12 11
Start 2 3 4 5 6 7 8 9 10
6 6 6 5 4 3 6 6 6 5 6 4 3 1
*/

unordered_map<int, pair<int, char>> mp;
vector<string> split(string str)
{
    vector<string> ans;
    stringstream ssss(str);
    string curr;
    // temp

    while (ssss >> curr)
    {
        ans.push_back((curr));
    }
    return ans;
}
void decode(vector<string> strs, int n)
{
    int ptr = 100;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        vector<string> curr = split(strs[i]);
        if (flag)
        {
            for (auto str : curr)
            {
                int m = str.size();
                if (m >= 4 && (str[0] == 'S' || str[0] == 'L') && str[1] == '(')
                {
                    cout << ptr << en;
                    string part = "";
                    int j = 2;
                    int curr_jump = 0;
                    while (str[j] != ')')
                    {
                        part += str[j];
                        j++;
                    }
                    if (part == "Start")
                    {
                        curr_jump = 1;
                    }
                    else if (part == "End")
                    {
                        curr_jump = 100;
                    }
                    else
                    {
                        curr_jump = stoi(part);
                    }
                    char jump_type = str[0];
                    mp[ptr] = {curr_jump, jump_type};
                }
                ptr--;
            }
        }
        else
        {
            int curr_size = curr.size();
            for (int itemp = curr_size - 1; itemp >= 0; itemp--)
            {
                string str = curr[itemp];
                int m = str.size();
                if (m >= 4 && (str[0] == 'S' || str[0] == 'L') && str[1] == '(')
                {
                    string part = "";
                    int j = 2;
                    int curr_jump;
                    while (str[j] != ')')
                    {
                        part += str[j];
                        j++;
                    }
                    if (part == "Start")
                    {
                        curr_jump = 1;
                    }
                    else if (part == "End")
                    {
                        curr_jump = 100;
                    }
                    else
                    {
                        curr_jump = stoi(part);
                    }
                    char jump_type = str[0];
                    mp[ptr] = {curr_jump, jump_type};
                }
                ptr--;
            }
        }
        flag = !flag;
    }
}
void sol(vector<string> moves)
{
    int n = moves.size();
    int coin = 1;
    int ladders = 0;
    int snakes = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int curr = stoi(moves[i]);
        if (coin == 100)
        {
            flag = true;
            break;
        }
        if (coin + curr > 100)
            continue;
        if (coin == 1)
            coin = curr;
        else
            coin += curr;

        if (mp.find(coin) != mp.end())
        {
            pair<int, char> val = mp[coin];
            coin = mp[coin].first;
            cout << coin << " " << mp[coin].first << " " << mp[coin].second << en;
            if (mp[coin].second == 'S')
                snakes++;
            else
                ladders++;
        }
    }
    cout << coin << en;
    if (coin == 100)
        flag = 1;
    if (flag)
    {
        cout << "Possible " << snakes << " " << ladders;
    }
    else
    {
        cout << "Not possible " << snakes << " " << ladders << " " << coin;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n = 10;
    vector<string> strs(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, strs[i]);
    }
    string mov;
    getline(cin, mov);
    vector<string> moves = split(mov);
    decode(strs, n);
    sol(moves);
    return 0;
}