/*
Chef recently created a new Tiling Window Manager called ChefWM. He wants to find out the maximum number of columns of windows he can fit on the screen and he needs your help.

Consider the screen to be an axis-aligned rectangle in the xy-plane, with its bottom-left corner at (0,0) and top-right corner at (N,M) (that is, the screen has width N units and height M units). ChefWM works as follows:

First, the screen is divided into one or more columns of equal integer width.
Then, each column is divided into two or more windows of equal integer height. Note that all windows within a column must have the same height, but windows in different columns may have different heights.
Finally, Chef would like the following condition to hold:
No two windows from different columns can have their horizontal boundary share the same y-coordinate (apart from y=0 and y=M). See the figures below for more details.
It is not allowed to leave any empty space on the screen, i.e, the division performed in the first two steps above must cover the entire screen.

Here is an example of a tiling that satisfies all the conditions, for N=8 and M=6.



Below are two tilings that satisfy all conditions except the last. The one on the left has a horizontal edge at y=2 in both columns, while the one on the right has a horizontal edge at y=2 in column 1 and column 3.

 

What is the maximum number of columns that ChefWM can fit on the screen while following the above conditions? Note that you do not need to maximize the number of windows, you only need to maximize the number of columns.

It may be possible that no columns can be created under these conditions, in that case, print 0.

Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
Each test case consists of a single line of input, containing two space-separated integers N,M — the coordinates of the top-right corner of the screen.
Output Format
For each test case, output a single line containing one integer — the maximum number of columns ChefWM can create for the screen.

Constraints
1≤T≤500
1≤N≤109
1≤M≤109
Sample Input 1 
5
8 210
1 100
100 5
10 1
9 2310
Sample Output 1 
4
1
1
0
3
Explanation
Test Case 1: It is possible to make 4 columns as follows:

The first column has 7 windows of height 30 each
The second column has 2 windows of height 105 each
The third column has 5 windows of height 42 each
The last column has 3 windows of height 70 each
It can be seen in the diagram below that the edges from any two windows from different columns do not have the same y-coordinate except for y=0 and y=m.



Test Case 2: There can only be one column no matter how many windows you keep (as long as there are at least 2 windows).

Test Case 3: You can have a single column with 5 windows. It can be shown that this is the maximum number of columns that can possibly satisfy the given restrictions.


*/