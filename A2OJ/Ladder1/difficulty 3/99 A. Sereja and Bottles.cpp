// I kept trying to come up with an O(n) solution but it had lots of bugs.Here's an O(n) solution.
#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define v vector
#define pii pair<int, int>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int main()
{
    int no_of_bottles;
    scanf("%d", &no_of_bottles);

    vector<int> brand(no_of_bottles + 1, 0);
    vector<int> can_open(no_of_bottles + 1, 0);

    for (int i = 1; i <= no_of_bottles; i++)
        scanf("%d %d", &brand[i], &can_open[i]);

    int impossible_bottles = 0;
    for (int i = 1; i <= no_of_bottles; i++)
    {
        int openable = false;

        for (int j = 1; j <= no_of_bottles; j++)
        {
            if (can_open[j] == brand[i] && i != j)
                openable = true;
        }

        impossible_bottles += (!openable);
    }

    printf("%d\n", impossible_bottles);
    return 0;
}