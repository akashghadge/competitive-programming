/*
The problem statement is really simple. There are some queries. You are to give the answers.

Input
An integer stating the number of queries Q(equal to 50000), and Q lines follow, each containing one integer K between 1 and 5000000 inclusive.

Output
Q lines with the answer of each query: the Kth prime number.

Example
Input:
7
1
10
100
1000
10000
100000
1000000

Output:
2
29
541
7919
104729
1299709
15485863

*/
#include <bits/stdc++.h>

using namespace std;

bool isprime[100000005];
vector<int> prime;

int main()
{
    // sieve();
    for (int i = 3; i <= 10000; i += 2)
    {
        if (isprime[i] == 0)
        {
            for (int j = i * i; j <= 100000000; j += i + i)
            {

                isprime[j] = 1;
            }
        }
    }
    prime.push_back(2);
    for (int i = 3; i <= 100000000; i += 2)
        if (isprime[i] == 0)
            prime.push_back(i);
    // primeload();
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        printf("%d\n", prime[n - 1]);
    }
}