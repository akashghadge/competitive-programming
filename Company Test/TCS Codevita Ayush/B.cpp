/*
You are a project manager in a large IT company. You need to select a team of employees to work on a project. You have a list of employees who are eligible for the selection. Employees are indexed from 1 to N.

However, there is a certain rule that must be followed in order to select the team. There are some employees who have some personal conflicts and they can't be in a team together. Also, each employee has a skill value assigned to them, representing their level of expertise. As a project manager, your task is to select a team of employees such that the total expertise of the team should be maximum, keeping the employees incompatibility in mind. Two employees are said to be incompatible if they have any conflicts among them.

Given the employees, their level of expertise value and employee pairs with conflicts, find the maximum possible expertise of the team.

Note: The selected team can contain one employee also.

Constraints
1 <= n <= 1000

0 <= c <= 100

1 <= expertise[i] <=10^4

Input
First line consists of two integers n,c separated by space, representing the number of employees and number of pairs having conflicts.

Next c lines, each consists of two integers separated by space. These represents the id of the employees having conflicts between them.

Last line consists of n integers separated by space, where ith integer represents the expertise level of ith employee.

Output
Print a single integer denoting the maximum possible expertise of the team.

Time Limit (secs)
1

Examples
Example 1

Input

8 6

1 2

2 5

3 6

6 8

1 4

7 8

7 5 4 3 1 6 2 9

Output

21

Explanation

You can form a team with employees [3, 1, 5, 8] who don't have any conflicts among themselves and the total expertise of the team is the sum of skill values of all employees i.e., 4+7+1+9 = 21. No other combination of employees will give an expertise which is greater than 21.

Example 2

Input

10 4

1 5

3 9

2 5

7 10

2 6 3 8 12 9 7 14 1 10

Output

56

Explanation

You can form a team with employees [5, 10, 3, 4, 6, 8] who don't have any conflicts among themselves and the total expertise of the team is the sum of skill values of all employees i.e., 12+10+3+8+9+14 = 56. No other combination of employees will give an expertise which is greater than 56.


*/
#include <bits/stdc++.h>
using namespace std;
int back(int curr_exp, vector<int> &curr, set<int> vis, int answer, vector<vector<int>> &graph, vector<int> &exp)
{
    bool conflict = true;
    for (int i = 0; i < curr.size() - 1; i++)
    {
        for (int j = i + 1; j < curr.size(); j++)
        {
            for (int k = 0; k < graph[curr[i]].size(); k++)
            {
                if (curr[j] == graph[curr[i]][k])
                {
                    conflict = false;
                    break;
                }
            }
        }
    }

    if (conflict)
    {
        answer = max(answer, curr_exp);
        for (int i = 1; i < graph.size(); i++)
        {
            if (vis.find(i) != vis.end())
                break;
            bool notIn = false;
            for (int j = 0; j < curr.size(); j++)
            {
                if (i == curr[j])
                    notIn = true;
            }
            if (notIn)
            {
                break;
            }
            curr.push_back(i);
            vis.insert(i);
            back(curr_exp + exp[i - 1], curr, vis, answer, graph, exp);
            vis.erase(i);
            curr.pop_back();
        }
    }
}
int solve(int n, int c, vector<vector<int>> &con, vector<int> &exp)
{
    vector<vector<int>> graph(n + 1);
    for (auto curr : con)
    {
        graph[curr[0]].push_back(curr[1]);
        graph[curr[1]].push_back(curr[0]);
    }
    int answer = 0;
    vector<int> curr_team;
    set<int> vis;
    back(0, curr_team, vis, answer, graph, exp);
    return answer;
}
int main()
{
    int n, c;
    cin >> n >> c;
    vector<vector<int>> con(n);
    for (int i = 0; i < c; i++)
    {
        int u, v;
        cin >> u >> v;
        con.push_back({u, v});
    }
    vector<int> exp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> exp[i];
    }
    cout << solve(n, c, con, exp) << endl;
}