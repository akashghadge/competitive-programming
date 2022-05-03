/*
Polycarpus loves hamburgers very much. He especially adores the hamburgers he makes with his own hands. Polycarpus thinks that there are only three decent ingredients to make hamburgers from: a bread, sausage and cheese. He writes down the recipe of his favorite "Le Hamburger de Polycarpus" as a string of letters 'B' (bread), 'S' (sausage) и 'C' (cheese). The ingredients in the recipe go from bottom to top, for example, recipe "ВSCBS" represents the hamburger where the ingredients go from bottom to top as bread, sausage, cheese, bread and sausage again.

Polycarpus has nb pieces of bread, ns pieces of sausage and nc pieces of cheese in the kitchen. Besides, the shop nearby has all three ingredients, the prices are pb rubles for a piece of bread, ps for a piece of sausage and pc for a piece of cheese.

Polycarpus has r rubles and he is ready to shop on them. What maximum number of hamburgers can he cook? You can assume that Polycarpus cannot break or slice any of the pieces of bread, sausage or cheese. Besides, the shop has an unlimited number of pieces of each ingredient.

Input
The first line of the input contains a non-empty string that describes the recipe of "Le Hamburger de Polycarpus". The length of the string doesn't exceed 100, the string contains only letters 'B' (uppercase English B), 'S' (uppercase English S) and 'C' (uppercase English C).

The second line contains three integers nb, ns, nc (1 ≤ nb, ns, nc ≤ 100) — the number of the pieces of bread, sausage and cheese on Polycarpus' kitchen. The third line contains three integers pb, ps, pc (1 ≤ pb, ps, pc ≤ 100) — the price of one piece of bread, sausage and cheese in the shop. Finally, the fourth line contains integer r (1 ≤ r ≤ 1012) — the number of rubles Polycarpus has.

Please, do not write the %lld specifier to read or write 64-bit integers in С++. It is preferred to use the cin, cout streams or the %I64d specifier.

Output
Print the maximum number of hamburgers Polycarpus can make. If he can't make any hamburger, print 0.

Examples
inputCopy
BBBSSC
6 4 1
1 2 3
4
outputCopy
2
inputCopy
BBC
1 10 1
1 10 1
21
outputCopy
7
inputCopy
BSC
1 1 1
1 1 3
1000000000000
outputCopy
200000000001

*/
#include <bits/stdc++.h>

#define setzero(a) memset(a, 0, sizeof(a))

#define pr1(x) cout << x << "\n"
#define fast ios::sync_with_stdio(0)
#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
using namespace std;
template <class T>
inline T bigmod(T b, T p, T m)
{
    T ret;
    if (p == 0)
        return 1;
    if (p & 1)
    {
        ret = (bigmod(b, p / 2, m) % m);
        return ((b % m) * ret * ret) % m;
    }
    else
    {
        ret = (bigmod(b, p / 2, m) % m);
        return (ret * ret) % m;
    }
}
/* template functions */

typedef long long LL;

int main()
{
    string str;
    LL i, n[5], cnt[5], ans, p[5], cost, high, low, mid, need, r;
    while (cin >> str)
    {
        for (i = 0; i < 3; i++)
            cin >> n[i];
        for (i = 0; i < 3; i++)
            cin >> p[i];
        cin >> r;
        setzero(cnt);
        for (i = 0; i < str.size(); i++)
        {
            if (str[i] == 'B')
                cnt[0]++;
            if (str[i] == 'S')
                cnt[1]++;
            if (str[i] == 'C')
                cnt[2]++;
        }
        ans = 0;
        low = 0;
        high = 1e15;
        while (low <= high)
        {
            mid = (high + low) / 2;
            cost = 0;
            for (i = 0; i < 3; i++)
            {
                need = mid * cnt[i] - n[i];
                if (need > 0)
                    cost += need * p[i];
            }
            if (cost <= r)
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        pr1(ans);
    }
    return 0;
}