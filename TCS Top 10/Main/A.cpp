/*

*/
#include <bits/stdc++.h>
using namespace std;

string numberToWord(int num)
{
    string words[] = {"zer", "one", "two", "thr", "fou", "fiv", "six", "sev", "eig", "nin"};
    if (num >= 0 && num <= 9)
    {
        return words[num];
    }
    else
    {
        return "Invalid";
    }
}
string toScientificNotation(const string &numStr)
{
    string num = numStr;
    num.erase(0, num.find_first_not_of('0')); // Remove leading zeros
    if (num.empty() || num == ".")
        return "0.0e+0"; // Handle edge case for zero

    size_t decimalPos = num.find('.');
    int exponent = 0;

    if (decimalPos != string::npos)
    {
        num.erase(decimalPos, 1);
        exponent = (decimalPos == 0) ? -(num.find_first_not_of('0') + 1) : decimalPos - 1;
        num.erase(0, num.find_first_not_of('0'));
    }
    else
    {
        exponent = num.length() - 1;
    }

    // Format mantissa to always have one digit before and one digit after the decimal
    string mantissa = num[0] + string(".") + (num.length() > 1 ? num.substr(1, 6) : "0");

    return mantissa + "e" + (exponent > 0 ? "+" : "") + to_string(exponent);
}

void solve()
{
    string a, b;
    cin >> a >> b;

    // process first string
    int n = a.size();
    bool neg = 0;
    if (a[0] == '-')
    {
        neg = 1;
        a = a.substr(1);
    }

    for (int i = 0; i < (int)a.size(); i++)
    {
        if (!(('0' <= a[i] and a[i] <= '9') || a[i] == '.'))
        {
            cout << "Invalid" << endl;
            return;
        }
    }
    a = toScientificNotation(a);
    string ans = "";
    int sum = 0;
    int cn = 0;
    int parity = 0;
    for (int i = 0; i < (int)a.size(); i++)
    {
        if ('0' <= a[i] and a[i] <= '9')
            sum += a[i] - '0';
        else if (a[i] == '-' or a[i] == '+')
            ans.push_back(a[i]);
        else
        {
            while (sum >= 10)
            {
                int temp = 0;
                while (sum)
                {
                    temp += (sum % 10);
                    sum /= 10;
                }
                sum = temp;
            }
            ans += numberToWord(sum);
            ans.push_back(a[i]);
            cn++;
            if (cn == 2)
            {
                parity = sum;
            }
            sum = 0;
        }
    }
    ans += numberToWord(sum);
    ans.push_back('@');
    for (auto val : b)
    {
        if (!('a' <= val and val <= 'z'))
        {
            cout << "Invalid" << endl;
            return;
        }
    }
    for (int i = !(sum % 2); i < (int)b.size(); i += 2)
    {
        ans.push_back(b[i]);
    }
    cout << (neg ? "-" : "") + ans << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}