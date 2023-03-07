#include <bits/stdc++.h>
using namespace std;
bool equals(string word1, string word2, int mistakesAllowed)
{
    if (word1 == word2)
        return true;
    if (word1.length() == word2.length())
    {
        for (int i = 0; i < word1.length(); i++)
        {
            if (word1[i] != word2[i])
            {
                mistakesAllowed--;
                if (mistakesAllowed < 0)
                {
                    return false;
                }
            }
        }
    } 
    else
        return false;
    return true;
}
vector<string> dict = {"ghadgd", "akahh"};
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
string solve(string str)
{
    stack<char> st;
    for (auto ch : str)
    {
        if (ch == ' ' and st.size() and st.top() == ' ')
        {
            continue;
        }
        else
        {
            st.push(ch);
        }
    }
    string ans = "";
    while (st.size())
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    vector<string> words = tokenize(ans);
    if (words.size() <= 1)
    {
        return "Invalid input";
    }
    for (auto val : words)
    {
        for (auto dict_word : dict)
        {
            if (equals(val, dict_word, 1))
            {
                val = dict_word;
                break;
            }
        }
        cout << val << " ";
    }
    cout << endl;
    return "";
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cout << solve("akash ghadge") << endl;
}