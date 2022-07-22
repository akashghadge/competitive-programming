
#include <bits/stdc++.h>
using namespace std;
int solve(int A[], int N)
{
    int maxx = -1, minn = A[0], l = 0, r = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] > maxx)
        {
            maxx = A[i];
            l = i;
        }

        if (A[i] <= minn)
        {
            minn = A[i];
            r = i;
        }
    }
    swap(l, r);
    if (r < l)
        return l + (N - r - 2);
    return l + (N - r - 1);
}
int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << solve(arr, N) << endl;
}