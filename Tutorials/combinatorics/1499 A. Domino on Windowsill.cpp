/*
You have a board represented as a grid with 2×n cells.

The first k1 cells on the first row and first k2 cells on the second row are colored in white. All other cells are colored in black.

You have w white dominoes (2×1 tiles, both cells are colored in white) and b black dominoes (2×1 tiles, both cells are colored in black).

You can place a white domino on the board if both board's cells are white and not occupied by any other domino. In the same way, you can place a black domino if both cells are black and not occupied by any other domino.

Can you place all w+b dominoes on the board if you can place dominoes both horizontally and vertically?

Input
The first line contains a single integer t (1≤t≤3000) — the number of test cases.

The first line of each test case contains three integers n, k1 and k2 (1≤n≤1000; 0≤k1,k2≤n).

The second line of each test case contains two integers w and b (0≤w,b≤n).

Output
For each test case, print YES if it's possible to place all w+b dominoes on the board and NO, otherwise.

You may print every letter in any case you want (so, for example, the strings yEs, yes, Yes and YES are all recognized as positive answer).

Example
inputCopy
5
1 0 1
1 0
1 1 1
0 0
3 0 0
1 3
4 3 1
2 2
5 4 3
3 1
outputCopy
NO
YES
NO
YES
YES
Note
In the first test case, n=1, k1=0 and k2=1. It means that 2×1 board has black cell (1,1) and white cell (2,1). So, you can't place any white domino, since there is only one white cell.

In the second test case, the board of the same size 2×1, but both cell are white. Since w=0 and b=0, so you can place 0+0=0 dominoes on the board.

In the third test case, board 2×3, but fully colored in black (since k1=k2=0), so you can't place any white domino.

In the fourth test case, cells (1,1), (1,2), (1,3), and (2,1) are white and other cells are black. You can place 2 white dominoes at positions ((1,1),(2,1)) and ((1,2),(1,3)) and 2 black dominoes at positions ((1,4),(2,4)) ((2,2),(2,3)).


*/

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
int n, k1, k2;
int w, b;
void input()
{
    cin >> n >> k1 >> k2 >> w >> b;
}
bool sol()
{
    int place_white = 0;
    int place_black = 0;
    if (k1 == k2)
    {
        place_white = k1;
        place_black = n - k1;
    }
    else
    {
        place_white = min(k1, k2);
        place_white += (max(k1, k2) - min(k1, k2)) / 2;
        k1 = n - k1;
        k2 = n - k2;
        place_black = min(k1, k2);
        place_black += (max(k1, k2) - min(k1, k2)) / 2;
    }

    return (place_white >= w && place_black >= b);
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
        sol() ? cout << "YES" : cout << "NO";
        cout << en;
    }
    return 0;
}