#include <bits/stdc++.h>
using namespace std;
bool is_prime(int curr_num)
{
    if (curr_num < 2)
        return false;
    for (int i = 2; i * i <= curr_num; i++)
        if (curr_num % i == 0)
            return false;
    return true;
}

int main()
{
    int n, p;
    cin >> n >> p;
    vector<int> circle(n, -1);
    int total_sum = 0, index = 0;
    for (int i = 2; i < n; i++)
    {
        if (is_prime(i))
            circle[index++] = i;
    }
    cout << index << endl;
    int curr = 0;
    while (total_sum <= p and curr < index)
    {
        total_sum += circle[curr++];
    }
    if (curr != index)
        cout << curr - 1 << endl;
    else
        cout << curr << endl;
}