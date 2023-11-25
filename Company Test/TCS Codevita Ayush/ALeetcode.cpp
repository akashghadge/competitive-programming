
#include <bits/stdc++.h>
using namespace std;
int getVal(char ch)
{
    int a = ch;
    while (a >= 10)
    {
        int sum = 0;
        while (a)
        {
            sum += (a % 10);
            a /= 10;
        }
        a = sum;
    }
    return a;
}
void sol()
{

    string str;
    int n;
    cin >> str >> n;
    vector<pair<int, int>> arr;
    int a = getVal(str[0]);
    int b = getVal(str[1]);
    bool f = 0;
    for (int i = n; i >= 1; i--)
    {
        int curr = n - a * i;
        if (curr % b == 0 and curr / b > 0)
        {
            arr.push_back({i, curr / b});
            f = 1;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << str[0] << arr[i].first << " " << str[1] << arr[i].second;
        if (i != arr.size() - 1)
        {
            cout << endl;
        }
    }

    if (!f)
        cout << "Not Possible";
}
int main()
{
    sol();
}