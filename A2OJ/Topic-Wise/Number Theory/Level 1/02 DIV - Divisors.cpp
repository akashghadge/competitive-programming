/*
process is followed here is
question say
print sequences 9th number for every
if count of divisor of that number say div is can be made up by p*q such that both p and q are prime numbers
for this
we need track all divisor count for each number
e.g  12-> 1,2,3,4,6,12 i.e count of divisors is 6
so 6 can be made up by two prime number 2 and 3
so 12 is part of sequence
*/
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define memo(a, b) memset(a, b, sizeof(a))
#define INF 1e9
#define EPS 1e-8
#define PI 3.14159265358979323846

typedef long long ll;
typedef unsigned long long ull;

/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */                       // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */   // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */            // Hexagonal Direction

const int mx = 1000000;
int cnt;
int divisor[mx + 10];
vector<int> prime_factor[mx + 10];

void sieve()
{
    for (int i = 1; i <= mx; i++)
    {
        for (int j = i; j <= mx; j += i)
            divisor[j]++;
    }

    for (int i = 2; i <= mx; i++)
    {
        if (prime_factor[i].size() == 0)
        {
            for (int j = i; j <= mx; j += i)
                prime_factor[j].pb(i);
        }
    }
}

int main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    sieve();

    for (int i = 1; i <= mx; i++)
    {
        int x = divisor[i];
        if (prime_factor[x].size() == 2 && prime_factor[x][0] * prime_factor[x][1] == x)
        {
            cnt++;
            if (cnt % 9 == 0)
                printf("%d\n", i);
        }
    }

    return 0;
}
