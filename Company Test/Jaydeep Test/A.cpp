#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    while (n--)
    {
        int curr;
        cin >> curr;
        int temp = curr;
        while (temp >= 10)
        {
            int sum = 0;
            while (temp)
            {
                sum += (temp % 10);
                temp /= 10;
            }
            temp = sum;
        }
        curr *= 10;
        curr += temp;
        cout << curr << endl;
    }
}