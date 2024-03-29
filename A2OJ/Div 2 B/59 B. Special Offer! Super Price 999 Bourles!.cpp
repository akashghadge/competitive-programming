/*
Polycarpus is an amateur businessman. Recently he was surprised to find out that the market for paper scissors is completely free! Without further ado, Polycarpus decided to start producing and selling such scissors.

Polycaprus calculated that the optimal celling price for such scissors would be p bourles. However, he read somewhere that customers are attracted by prices that say something like "Special Offer! Super price 999 bourles!". So Polycarpus decided to lower the price a little if it leads to the desired effect.

Polycarpus agrees to lower the price by no more than d bourles so that the number of nines at the end of the resulting price is maximum. If there are several ways to do it, he chooses the maximum possible price.

Note, Polycarpus counts only the trailing nines in a price.

Input
The first line contains two integers p and d (1 ≤ p ≤ 1018; 0 ≤ d < p) — the initial price of scissors and the maximum possible price reduction.

Please, do not use the %lld specifier to read or write 64-bit integers in С++. It is preferred to use cin, cout streams or the %I64d specifier.

Output
Print the required price — the maximum price that ends with the largest number of nines and that is less than p by no more than d.

The required number shouldn't have leading zeroes.

Examples
inputCopy
1029 102
outputCopy
999
inputCopy
27191 17
outputCopy
27189
*/
#include <iostream>
#define ll long long
using namespace std;
int main()
{
    ll p, d;
    cin >> p >> d;
    ll n = ++p;
    for (ll k = 10;; k *= 10)
    {
        if (p % k > d)
            break;
        n = p - (p % k);
    }
    cout << n - 1;
}