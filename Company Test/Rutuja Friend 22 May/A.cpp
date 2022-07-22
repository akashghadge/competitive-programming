/*

*/
#include <bits/stdc++.h>
using namespace std;
int Goodness(int N, int A[])
{
    int result = 0;
    for (int i = 1; i < N - 1; i++)
    {
        int left = *max_element(A, A + i - 1);
        int right = *min_element(A + i + 1, A + N);
        if (left < A[i] && A[i] < right)
        {
            cout << i << endl;
            result += 2;
        }
        else if (A[i - 1] < A[i] && A[i] < A[i + 1])
        {
            cout << i << " 1111111" << endl;
            result += 1;
        }
    }
    return result;
}
// int Goodness(int N, int A[])
// {
//     int result = 0;
//     for (int i = 1; i < N - 1; i++)
//     {
//         int left = *max_element(A, A + i - 1);
//         int right = *min_element(A + i + 1, A + N);
//         if (left < A[i] && A[i] < right)
//         {
//             result += 2;
//         }
//         else if (A[i - 1] < A[i] && A[i] < A[i + 1])
//             result += 1;
//     }
//     return result;
// }

int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << Goodness(N, arr);
}