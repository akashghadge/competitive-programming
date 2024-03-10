#include <bits/stdc++.h>
using namespace std;

int add(int *a, int b)
{
    *a = *a + 1;
    // a -> 0xfff
    // * -> 0xfff -> (*a) -> 2 
    return (*a + b);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // int arr[10];
    // call by value
    // call by reference
    int a = 1;
    int b = 2;
    cout << add(&a, b) << endl;
    cout << a << endl;
}