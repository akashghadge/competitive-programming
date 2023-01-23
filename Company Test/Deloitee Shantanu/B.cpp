#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string str;
    int n;
    cin >> str >> n;
    int m = str.size();
    n = n % (m * 2);
    if (n >= m)
    {
        reverse(str.begin(), str.end());
        
        reverse(str.begin(), str.begin()+);
    }
    else
    {
    }
    cout << str << endl;
}