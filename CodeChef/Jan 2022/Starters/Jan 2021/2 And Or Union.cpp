/*
You are given an array A consisting of N integers.

From array A, we create a new array B containing all pairwise bitwise ANDs of elements from A. That is, B consists of N⋅(N−1)/2 elements, each of the form Ai&Aj for some 1≤i<j≤N.

In array B, we repeat the following process till there is only one element remaining:

Let the current maximum and minimum element of array B be X and Y respectively.
Remove X and Y from array B and insert X|Y into it.
Determine the last remaining element in array B.

Here, & denotes the Bitwise AND operation and | denotes the Bitwise OR operation.

Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N, denoting the number of elements in A.
The second line of each test case contains N space-separated integers A1,A2,…,AN.
Output Format
For each test case, print a single line containing one integer — the last remaining element in array B.

Constraints
1≤T≤104
2≤N≤105
0≤Ai≤109
The sum of N over all test cases does not exceed 2⋅105.
Sample Input 1 
3
2
1 3
3
2 7 1
4
4 6 7 2
Sample Output 1 
1
3
6
Explanation
Test Case 1: Array B will be [A1&A2]=[1&3]=[1]. There is only one element in B so the answer is 1.

Test Case 2: Array B will be [A1&A2,A1&A3,A2&A3]=[2&7,2&1,7&1]=[2,0,1].

Then, we do the following operations on B:

Remove 2 and 0 from B and insert 2|0=2 into it. Now, B=[1,2].
Remove 2 and 1 from B and insert 2|1=3 into it. Now, B=[3].
The last remaining element is thus 3.

Author:	5★dash2199
Date Added:	29-12-2021
Time Limit:	1 secs
Source Limit:	50000 Bytes
Languages:	CPP14, C, JAVA, PYTH 3.6, CPP17, PYTH, PYP3, CS2, ADA, PYPY, TEXT, PAS fpc, NODEJS, RUBY, PHP, GO, HASK, TCL, PERL, SCALA, LUA, kotlin, BASH, JS, LISP sbcl, rust, PAS gpc, BF, CLOJ, R, D, CAML, FORT, ASM, swift, FS, WSPC, LISP clisp, SQL, SCM guile, PERL6, ERL, CLPS, ICK, NICE, PRLG, ICON, COB, SCM chicken, PIKE, SCM qobi, ST, SQLQ, NEM

*/