/*

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ase visualise kar ki start ani end mid pasun start hotil ani each itration apn tyana start la 0 kade gheun yeu ani end la n-1 kade till half itrations of rows
    int n = 9, start = 4, end = 4;
    for (int i = 0; i <= n / 2; i++, start--, end++)
    {
        for (int j = 0; j < n; j++)
        {
            // first row every time star print karycha ahe
            if (i == 0)
            {
                cout << "*";
            }
            // or jar first or last column asel tari print karyche ahe
            else if (j == 0 or j == n - 1)
            {
                cout << "*";
            }
            // ani specific tya decrease increase behaviour sathi apn start ani end equal to column number asel tr pn print kart ahe
            else if (j == start or j == end)
            {
                cout << "*";
            }
            // other wise print blank
            else
            {
                cout << " ";
            }
            // ha blank every time print karycha ahe
            cout << " ";
        }
        // every row nantr next line sathi
        cout << endl;
    }
}