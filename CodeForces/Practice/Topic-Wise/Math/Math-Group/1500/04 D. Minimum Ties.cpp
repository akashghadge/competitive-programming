/*
Notes
** ASCII of 'a'- 97,'z'- 123,'A'- 65,'Z'- 90,'0'- 48,'9'- 57
*/
/*
If n
 is odd, then we can solve the problem without any ties: each team should win exactly ⌊n2⌋
 matches and lose the same number of matches. Finding which matches each team wins and which matches each team loses can be done with some graph algorithms (like Eulerian cycles or circulations), or with a simple construction: place all teams in a circle in any order, and let the i
-th team win against the next ⌊n2⌋
 teams after it in the circle, and lose to all other teams.

Unfortunately, if n
 is even, we need to use some ties since the total sum of scores over all teams is exactly 3n(n−1)2
 when there are no ties, and this number is not divisible by n
 when n
 is even. Each tie reduces the total sum by 1
, and the minimum number of ties to make 3n(n−1)2−t
 divisible by n
 is t=n2
 (since 3n(n−1)2modn=n2
). So, if we find an answer with exactly n2
 ties, it is optimal. And it's easy to find one: once again, place all teams in a circle in any order; make the i
-th team win against n−22
 next teams in the circle, lose against n−22
 previous teams in the circle, and tie with the opposite team in the circle.
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n % 2 == 1)
        {
            for (int i = 0; i < n; i++)
                for (int j = i + 1; j < n; j++)
                    if (j - i <= n / 2)
                        cout << 1 << " ";
                    else
                        cout << -1 << " ";
            cout << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
                for (int j = i + 1; j < n; j++)
                    if (j - i < n / 2)
                        cout << 1 << " ";
                    else if (j - i == n / 2)
                        cout << 0 << " ";
                    else
                        cout << -1 << " ";
            cout << endl;
        }
    }
}
