#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
#define st first
#define nd second

const int MAX_N = 1000;
int N;
int A[MAX_N];
vector<pii> v;

bool cross(int i, int j)
{
    if (v[j].st < v[i].st && v[i].st < v[j].nd && v[i].nd > v[j].nd)
        return true;
    if (v[j].st < v[i].nd && v[i].nd < v[j].nd && v[i].st < v[j].st)
        return true;
    return false;
}

int main()
{
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 1; i < N; i++)
    {
        int s = min(A[i - 1], A[i]);
        int t = max(A[i - 1], A[i]);
        v.push_back(pii(s, t));
    }

    const int n = v.size();
    for (int i = 0; i + 1 < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (cross(i, j) || cross(i, j))
            {
                puts("yes");
                return 0;
            }
        }
    }

    puts("no");

    return 0;
}
