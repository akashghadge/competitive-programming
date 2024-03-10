#include <bits/stdc++.h>
using namespace std;

int HelpFunction(int n, int m, vector<vector<int>> &mainArray, pair<int, int> First, pair<int, int> Last)
{
    vector<vector<int>> lookUpArray(n + 1, vector<int>(m + 1, INT_MAX));
    lookUpArray[First.first][First.second] = mainArray[First.first - 1][First.second - 1];

    for (int i = First.first; i <= Last.first; ++i)
    {
        for (int j = First.second; j <= Last.second; ++j)
        {
            if (i > First.first)
            {
                lookUpArray[i][j] = min(lookUpArray[i][j], lookUpArray[i - 1][j] + mainArray[i - 1][j - 1]);
            }
            if (j > First.second)
            {
                lookUpArray[i][j] = min(lookUpArray[i][j], lookUpArray[i][j - 1] + mainArray[i - 1][j - 1]);
            }
        }
    }

    return (lookUpArray[Last.first][Last.second] != INT_MAX) ? lookUpArray[Last.first][Last.second] : -1;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> mainArray(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> mainArray[i][j];
        }
    }

    pair<int, int> First, Last;
    cin >> First.first >> First.second;
    cin >> Last.first >> Last.second;

    int output_final = HelpFunction(n, m, mainArray, First, Last);
    cout << output_final << endl;

    return 0;
}
