#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int n, m;
char S[1100];

int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", S);
        for (int j = 0; j < m; j++)
            if (S[j] == '.')
            {
                if ((i + j) & 1)
                    S[j] = 'W';
                else
                    S[j] = 'B';
            }
        printf("%s\n", S);
    }
}