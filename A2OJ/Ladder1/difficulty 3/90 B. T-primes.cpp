//tprimes
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long int i, j, n;
    long long int x;
    long long int m = 1000001;

    //generate prime numbers
    vector<bool> primes(1000001, true);
    set<long long int> st;
    primes[0] = primes[1] = false;

    //seive of eratosthenes
    for (i = 2; i * i <= m; i++)
    {
        if (primes[i])
        {
            for (j = i; i * j <= m; j++)
            {
                primes[i * j] = false;
            }
        }
    }

    //put all the t_primes in the set
    for (i = 2; i <= m; i++)
    {
        if (primes[i])
            st.insert(i * i);
    }

    cout << "How many numbers ?" << endl;
    cin >> n;

    while (n--)
    {
        cout << endl
             << "Enter the number " << endl;
        cin >> x;

        if (st.find(x) != st.end())
            cout << x << " is T-prime";

        else
            cout << x << " is NOT T-prime";

        cout << endl;
    }

    return 0;
}