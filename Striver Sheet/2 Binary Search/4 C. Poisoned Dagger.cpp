/*
Monocarp is playing yet another computer game. In this game, his character has to kill a dragon. The battle with the dragon lasts 100500 seconds, during which Monocarp attacks the dragon with a poisoned dagger. The i-th attack is performed at the beginning of the ai-th second from the battle start. The dagger itself does not deal damage, but it applies a poison effect on the dragon, which deals 1 damage during each of the next h seconds (starting with the same second when the dragon was stabbed by the dagger). However, if the dragon has already been poisoned, then the dagger updates the poison effect (i.e. cancels the current poison effect and applies a new one).

For example, suppose h=4, and Monocarp stabs the dragon during the seconds 2, 4 and 10. Then the poison effect is applied at the start of the 2-nd second and deals 1 damage during the 2-nd and 3-rd seconds; then, at the beginning of the 4-th second, the poison effect is reapplied, so it deals exactly 1 damage during the seconds 4, 5, 6 and 7; then, during the 10-th second, the poison effect is applied again, and it deals 1 damage during the seconds 10, 11, 12 and 13. In total, the dragon receives 10 damage.

Monocarp knows that the dragon has h hit points, and if he deals at least h damage to the dragon during the battle — he slays the dragon. Monocarp has not decided on the strength of the poison he will use during the battle, so he wants to find the minimum possible value of h (the number of seconds the poison effect lasts) that is enough to deal at least h damage to the dragon.

Input
The first line contains a single integer t (1≤t≤1000) — the number of test cases.

The first line of the test case contains two integers n and h (1≤n≤100;1≤h≤1018) — the number of Monocarp's attacks and the amount of damage that needs to be dealt.

The second line contains n integers a1, a2, ..., an (1≤ai≤109;ai<ai+1), where ai is the second when the i-th attack is performed.

Output
For each test case, print a single integer — the minimum value of the parameter h, such that Monocarp will cause at least h damage to the dragon.

Example
inputCopy
4
2 5
1 5
3 10
2 4 10
5 3
1 2 4 5 7
4 1000
3 25 64 1337
outputCopy
3
4
1
470
Note
In the first example, for h=3, damage is dealt in seconds [1,2,3,5,6,7].

In the second example, for h=4, damage is dealt in seconds [2,3,4,5,6,7,10,11,12,13].

In the third example, for h=1, damage is dealt in seconds [1,2,4,5,7].



*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int t;
int n;
LL h;
int main()
{

    cin >> t;
    while (t--)
    {

        cin >> n >> h;
        vector<LL> v(n);
        for (auto &x : v)
            cin >> x;
        LL l = 1, r = h;
        while (l < r)
        {

            LL mid = (l + r) >> 1;
            LL sum = mid;
            for (int i = 0; i < n - 1; i++)
                sum += min(mid, v[i + 1] - v[i]);
            if (sum >= h)
                r = mid;
            else
                l = mid + 1;
        }
        cout << r << endl;
    }
    return 0;
}