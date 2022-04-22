/*
Once little Vasya read an article in a magazine on how to make beautiful handmade garland from colored paper. Vasya immediately went to the store and bought n colored sheets of paper, the area of each sheet is 1 square meter.

The garland must consist of exactly m pieces of colored paper of arbitrary area, each piece should be of a certain color. To make the garland, Vasya can arbitrarily cut his existing colored sheets into pieces. Vasya is not obliged to use all the sheets to make the garland.

Vasya wants the garland to be as attractive as possible, so he wants to maximize the total area of ​​m pieces of paper in the garland. Calculate what the maximum total area of ​​the pieces of paper in the garland Vasya can get.

Input
The first line contains a non-empty sequence of n (1 ≤ n ≤ 1000) small English letters ("a"..."z"). Each letter means that Vasya has a sheet of paper of the corresponding color.

The second line contains a non-empty sequence of m (1 ≤ m ≤ 1000) small English letters that correspond to the colors of the pieces of paper in the garland that Vasya wants to make.

Output
Print an integer that is the maximum possible total area of the pieces of paper in the garland Vasya wants to get or -1, if it is impossible to make the garland from the sheets he's got. It is guaranteed that the answer is always an integer.

Examples
inputCopy
aaabbac
aabbccac
outputCopy
6
inputCopy
a
z
outputCopy
-1
Note
In the first test sample Vasya can make an garland of area 6: he can use both sheets of color b, three (but not four) sheets of color a and cut a single sheet of color c in three, for example, equal pieces. Vasya can use the resulting pieces to make a garland of area 6.

In the second test sample Vasya cannot make a garland at all — he doesn't have a sheet of color z.


*/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int arr[26];
int arr2[26];
int main()
{

    string s, s2;
    int sum = 0;
    cin >> s >> s2;
    int len1 = s.length();
    int len2 = s2.length();
    for (int i = 0; i < len1; i++)
    {
        ++arr[s[i] - 'a'];
    }
    for (int i = 0; i < len2; i++)
    {
        ++arr2[s2[i] - 'a'];
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr2[i])
        {
            if (arr[i])
                sum += min(arr[i], arr2[i]);
            else
            {
                sum = 0;
                break;
            }
        }
    }

    if (sum)
    {
        cout << sum;
    }
    else
    {
        cout << "-1";
    }

    return 0;
}