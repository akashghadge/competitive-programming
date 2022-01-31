#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<long long>
#define vii vector<vector<long long>>
#define vll vector<ll>
#define ll long long
#define v vector
#define pii pair<long long, long long>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
bool test_case()
{
    long long ch_health, ch_attack, m_health, m_attack;
    cin >> ch_health >> ch_attack >> m_health >> m_attack;
    ll k, wep, arm;
    cin >> k >> wep >> arm;
    long long w = k;
    long long h = 0;
    while (abs(w - k) <= k)
    {
        long long currH = (ch_health) + (arm * h);
        long long currW = (ch_attack) + (wep * w);

        long long player = (currH / m_attack) + (currH % m_attack != 0 ? 1 : 0);
        long long mons = (m_health / currW) + (m_health % currW != 0 ? 1 : 0);

        if (player >= mons)
            return true;

        w--;
        h++;
    }
    return false;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    long long T;
    cin >> T;
    while (T--)
    {
        test_case() ? cout << "YES" : cout << "NO";
        cout << en;
        ;
    }
    return 0;
}