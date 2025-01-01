#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int countSubstringsWithEqual01(const string &str)
{
    int count = 0;
    int prevRunLength = 0;
    int currRunLength = 1;
    for (size_t i = 1; i < str.size(); ++i)
    {
        if (str[i] == str[i - 1])
        {
            currRunLength++;
        }
        else
        {
            count += min(prevRunLength, currRunLength);
            prevRunLength = currRunLength;
            currRunLength = 1;
        }
    }

    count += min(prevRunLength, currRunLength);
    return count;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string input;
    cout << "Enter a binary string: ";
    cin >> input;

    int result = countSubstringsWithEqual01(input);
    cout << "Number of substrings with equal number of 0's and 1's: " << result << endl;

    return 0;
}
