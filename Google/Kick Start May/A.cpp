#include <bits/stdc++.h>
using namespace std;

#define en "\n"
#define ll long long
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve(int k)
{
    int n;
    string str_in;
    cin >> n >> str_in;
    bool digC = 0;
    bool uppC = 0;
    bool lowC = 0;
    int len = 0;
    bool speC = 0;
    for (int i = 0; i < n; i++)
    {
        if (str_in[i] >= 65 && str_in[i] <= 90)
            uppC = 1;
        else if (str_in[i] >= 97 && str_in[i] <= 122)
            lowC = 1;
        else if (str_in[i] == '#' || str_in[i] == '@' || str_in[i] == '*' || str_in[i] == '&')
            speC = 1;
        else
            digC = 1;
    }
    if (!digC)
        str_in += '1';
    if (!uppC)
        str_in += 'A';
    if (!lowC)
        str_in += 'a';
    if (!speC)
        str_in += '#';

    while (str_in.size() < 7)
        str_in += 'a';
    cout << "Case #" << k + 1 << ": " << str_in << endl;
}

int main()
{
    FAST;
    ll T = 1;
    cin >> T;
    int k = 0;
    while (k < T)
    {
        solve(k);
        k++;
    }

    return 0;
}