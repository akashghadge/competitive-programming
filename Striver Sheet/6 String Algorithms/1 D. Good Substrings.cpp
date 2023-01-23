#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ULL;

char s[2000], che[30];
pair<ULL, ULL> a[2260000];

int main()
{
    scanf("%s%s", s, che);
    int n = 0, k;
    scanf("%d", &k);
    for (int i = 0; s[i]; i++)
    {
        int cnt = 0;
        ULL h1 = 5381, h2 = 0;
        for (int j = i; s[j]; j++)
        {
            if (che[s[j] - 'a'] == '0')
                cnt++;
            if (cnt > k)
                break;
            h1 = h1 * 33ll + s[j];
            h2 = h2 * 131ll + s[j];
            a[n++] = make_pair(h1, h2);
        }
    }
    sort(a, a + n);
    printf("%d\n", (int)(unique(a, a + n) - a));
}
