
/**
 * here if we look closer
 * aaabb b=> 2 b=> 1
 * aabab b=> 3 b=> 1
 * aabba b=> 3 b=> 2
 * abaab b=> 4 b=> 1
 * ababa b=> 4 b=> 2
 * abbaa b=> 4 b=> 3
 * baaab b=> 5 b=> 1
 * baaba b=> 5 b=> 2
 * babaa b=> 5 b=> 3
 * bbaaa b=> 5 b=> 4
 * wow just follow pattern
 */
#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main()
{
    int t;
    cin >> t;
    forn(tt, t)
    {
        int n, k;
        cin >> n >> k;
        string s(n, 'a');
        for (int i = n - 2; i >= 0; i--)
        {
            if (k <= (n - i - 1))
            {
                s[i] = 'b';
                s[n - k] = 'b';
                cout << s << endl;
                break;
            }
            k -= (n - i - 1);
        }
    }
}
