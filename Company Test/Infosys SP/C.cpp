#include <bits/stdc++.h>
using namespace std;
int sol(vector<int> arr, int n)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        int prev = -1;
        int cn = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (prev == -1)
            {
                prev = arr[j];
                cn = 1;
            }
            else if (prev != arr[j])
            {
                temp.push_back(prev * cn);
                prev = arr[j];
                cn = 1;
            }
            else
            {
                cn++;
            }
        }
        temp.push_back(prev * cn);
        if (temp.size() == arr.size())
            break;
        arr = temp;
        temp.clear();
    }
    return temp.size();
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << sol(arr, n) << endl;
}