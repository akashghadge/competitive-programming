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
// #define INOUT                         \
//     freopen("input.txt", "r", stdin); \
//     freopen("output.txt", "w", stdout);
bool special(int n)
{
    unordered_set<int> s;
    while (n)
    {
        int temp = n % 10;
        s.insert(temp);
        n /= 10;
    }
    return s.size() == 4;
}
int main()
{
    FAST;
    // INOUT;
    int n;
    cin >> n;
    for (int i = n + 1; i <= 10000; i++)
    {
        if (special(i))
        {
            cout << i << en;
            break;
        }
    }
}