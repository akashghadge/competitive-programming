/*
Chef gets confused between mean and median very often, and as a result, he has developed a dislike of arrays whose mean and median are not equal.

Chef has an array A of N elements. He can perform the following operation on it:

Pick an index 1≤i≤N and increase Ai by 1.
He would like to obtain an array whose mean and median are equal. Determine the minimum number of operations required to achieve this.

Note: The median of an array A of length N is defined as follows: Sort the array A. Then,

If N is even, the median is the (N2)th element
If N is odd, the median is the (N+12)th element
For example, the median of the array [3,4,1,2] is 2 and the median of the array [3,4,1] is 3.

Input Format
The first line of input contains a single integer T, denoting the number of testcases. The description of T test cases follows.
The first line of each test case contains a single integer N, denoting the size of the array.
The second line of each test case contains N space-separated integers A1,A2,…,AN.
Output Format
For each test case, print a single line containing one integer — the minimum number of operations Chef needs to perform to make the mean and median equal.

Constraints
1≤T≤104
2≤N≤3⋅105
1≤Ai≤109
Sum of N over all test cases does not exceed 3⋅105
Sample Input 1 
3
3
1 2 3
4
1 1 3 3
5
1 1000000000 1 1000000000 1
Sample Output 1 
0
4
500000002
Explanation
Test Case 1: The mean and median of the array are both 2. They are already equal, so no operations are required.

Test Case 2: It is optimal to apply the operation on 1st and 2nd index twice each. The array after applying these operations will be [3,3,3,3], which has both mean and median 3.

Author:	utkarsh_adm
Date Added:	30-12-2021
Time Limit:	1 secs
Source Limit:	50000 Bytes
Languages:	CPP14, C, JAVA, PYTH 3.6, CPP17, PYTH, PYP3, CS2, ADA, PYPY, TEXT, PAS fpc, NODEJS, RUBY, PHP, GO, HASK, TCL, PERL, SCALA, LUA, kotlin, BASH, JS, LISP sbcl, rust, PAS gpc, BF, CLOJ, R, D, CAML, FORT, ASM, swift, FS, WSPC, LISP clisp, SQL, SCM guile, PERL6, ERL, CLPS, ICK, NICE, PRLG, ICON, COB, SCM chicken, PIKE, SCM qobi, ST, SQLQ, NEM
Submit

*/