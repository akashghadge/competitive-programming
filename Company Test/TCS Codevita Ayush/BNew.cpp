#include <bits/stdc++.h>

using namespace std;

void backtrack(int current_expertise, vector<int> &current_team, unordered_set<int> &visited, int &placementlelo, const vector<vector<int>> &graph, const vector<int> &expertise)
{
    bool is_conflict_free = true;
    for (size_t i = 0; i < current_team.size() - 1; ++i)
    {
        for (size_t j = i + 1; j < current_team.size(); ++j)
        {
            if (find(graph[current_team[i]].begin(), graph[current_team[i]].end(), current_team[j]) != graph[current_team[i]].end())
            {
                is_conflict_free = false;
                break;
            }
        }
    }

    if (is_conflict_free)
    {
        placementlelo = max(placementlelo, current_expertise);

        for (int i = 1; i < graph.size(); ++i)
        {
            if (visited.find(i) == visited.end() && find(current_team.begin(), current_team.end(), i) == current_team.end())
            {
                current_team.push_back(i);
                visited.insert(i);
                backtrack(current_expertise + expertise[i - 1], current_team, visited, placementlelo, graph, expertise);
                current_team.pop_back();
                visited.erase(i);
            }
        }
    }
}

int solve(int n, int c, const vector<vector<int>> &conflicts, const vector<int> &expertise)
{
    vector<vector<int>> graph(n + 1);

    for (const auto &conflict : conflicts)
    {
        int u = conflict[0], v = conflict[1];
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int placementlelo = 0;
    vector<int> current_team;

    unordered_set<int> visited;
    backtrack(0, current_team, visited, placementlelo, graph, expertise);

    return placementlelo;
}

int main()
{
    int n, c;
    cin >> n >> c;

    vector<vector<int>> conflicts;
    for (int i = 0; i < c; ++i)
    {
        int u, v;
        cin >> u >> v;
        conflicts.push_back({u, v});
    }

    vector<int> expertise(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> expertise[i];
    }

    int placementlelo = solve(n, c, conflicts, expertise);
    cout << placementlelo << endl;

    return 0;
}
