#include "iostream"
#include "limits.h"
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int s = n / k;
    int c[k] = {0}, p = 0;
    int i = 0, j = 0, ii;
    while (j < k)
    {
        p = 0;
        ii = i;
        while (p < s)
        {

            c[j] = c[j] + a[ii];
            // cout<<"j="<<j<<"   c[j]="<<c[j]<<endl;
            ii = ii + k;

            p++;
        }
        j++;
        i++;
    }

    // for (int i = 0; i < k; ++i)
    // {
    // 	cout<<c[i]<<" ";
    // }
    // cout<<endl;
    int min = INT_MAX, mini;
    for (int i = 0; i < k; i++)
    {
        if (min > c[i])
        {
            min = c[i];
            mini = i;
            // cout<<"i="<<i<<endl;
        }
        // cout<<"min="<<min<<endl;
    }
    cout << (mini + 1) << endl;
    return 0;
}
