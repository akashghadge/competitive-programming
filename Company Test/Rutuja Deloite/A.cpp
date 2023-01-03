#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        string str;
        cin >> str;
        string s = "", e = "", o = "";
        for (int i = 0; i < str.size(); i++)
        {
            if (i % 2 == 0)
                e += str[i];
            else
                o += str[i];
        }
        cout << e + o << endl;
    }
}