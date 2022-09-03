#include <bits/stdc++.h>
using namespace std;
bool checkSum(int sumLeft[], int k)
{
    int r = true;
    for (int i = 0; i < k; i++)
    {
        if (sumLeft[i] != 0)
        {
            r = false;
        }
    }

    return r;
}
bool subsetSum(int S[], int n, int sumLeft[], int A[], int k)
{
    if (checkSum(sumLeft, k))
    {
        return true;
    }
    if (n < 0)
    {
        return false;
    }
    bool result = false;
    for (int i = 0; i < k; i++)
    {
        if (!result && (sumLeft[i] - S[n]) >= 0)
        {
            A[n] = i + 1;
            sumLeft[i] = sumLeft[i] - S[n];
            result = subsetSum(S, n - 1, sumLeft, A, k);
            sumLeft[i] = sumLeft[i] + S[n];
        }
    }
    return result;
}

vector<vector<int>> partition(int S[], int n, int k)
{
    vector<vector<int>> ans;
    if (n < k)
    {
        return ans;
    }
    int sum = accumulate(S, S + n, 0);

    int A[n], sumLeft[k];
    for (int i = 0; i < k; i++)
    {
        sumLeft[i] = sum / k;
    }
    bool result = !(sum % k) && subsetSum(S, n - 1, sumLeft, A, k);

    if (!result)
    {
        return ans;
    }
    for (int i = 0; i < k; i++)
    {
        vector<int> res;
        for (int j = 0; j < n; j++)
        {
            if (A[j] == i + 1)
            {
                res.push_back(S[j]);
            }
        }
        ans.push_back(res);
    }
    return ans;
}

int main()
{
    int a, n;
    cin >> a >> n;
    int arr[n];
    int ptr = 1;
    for (int i = 0; i < n; i++)
    {
        if (ptr != a)
            arr[i] = ptr;
        else
        {
            ptr++;
            arr[i] = ptr;
        }
        ptr++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    vector<vector<int>> ans = partition(arr, n, 2);
    if (ans.size() == 0)
        cout << "Impossible" << endl;
    else
    {
        vector<int> res(n + 1);
    }
}