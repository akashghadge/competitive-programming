#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int v1, v2;
    int n, d;

    cin >> v1 >> v2;
    cin >> n >> d;

    int ans = v1;
    int curv = v1;
    for (int i = 1; i < n; i++)
    {
        int newv;
        for (int dd = d; dd >= -d; dd--)
        {
            newv = curv + dd;
            if (abs(newv - v2) <= (n - i - 1) * d)
                break;
        }
        curv = newv;
        ans += curv;
    }

    cout << ans;

    return 0;
}
