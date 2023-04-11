#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, vector<int>> mp;
    int n;
    cin >> n;
    string temp;
    getline(cin, temp);
    for (int i = 0; i < n; i++)
    {
        string str;
        getline(cin, str);
        mp[str].push_back(i + 1);
    }
    cout << mp.size() << endl;
    for (auto val : mp)
    {
        for (auto curr : val.second)
            cout << curr << " ";
        cout << endl;
    }
}