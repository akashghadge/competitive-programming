#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<int>
#define vll vector<ll>
#define vii vector<vector<int>>
#define pii pair<int, int>
#define vpi vector<pair<int, int>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
/*input sections*/
int n;
vi arr;
vi pr;
int r;
void input()
{
    cin >> n >> r;
    arr.resize(n);
    pr.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> pr[i];
    }
}
struct Node
{
    int a, b;
    Node(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
};
void sol()
{
    v<Node *> curr(n);
    for (int i = 0; i < n; i++)
    {
        curr[i] = new Node(arr[i], pr[i]);
    }
    sort(curr.begin(), curr.end(),
         [](Node *f, Node *s)
         {
             int d1 = f->a - f->b;
             int d2 = s->a - s->b;
             return d1 < d2;
         });
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        while (curr[i]->a <= r)
        {
            int curr_buy = r / curr[i]->a;
            r -= curr_buy * curr[i]->a;
            r += curr_buy * curr[i]->b;
            ans += curr_buy;
        }
    }
    cout << ans << en;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}