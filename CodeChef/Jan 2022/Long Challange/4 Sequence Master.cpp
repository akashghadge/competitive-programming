/*
Given is a sequence A of length N.

Define f(i,j) to be the number of distinct elements in Ai,Ai+1,…,Aj.

You need to process Q queries of the following two types:

1 x y — set Ax=y.
2 k — print ∑i=1k∑j=ikf(i,j).
Input Format
The first line of input contains two integers N and Q — the size of the array and the number of queries.
The second line of input contains N space-separated integers A1,A2,…,AN.
Then, Q lines follow, describing queries in the format given in the statement.
Output Format
For each type 2 query, print the answer to it on a new line.

Constraints
1≤N,Q≤2⋅105
1≤Ai≤N
1≤x,y≤N
1≤k≤N
Subtasks
Subtask 1 (20 points): No type 1 queries
Subtask 2 (80 points): Original constraints
Sample Input 1 
3 2
1 2 2
2 2
2 3
Sample Output 1 
4
8
Explanation
Test Case 1: The answer is f(1,1)+f(1,2)+f(2,2)=1+2+1=4.

Test Case 2: The answer is f(1,1)+f(1,2)+f(1,3)+f(2,2)+f(2,3)+f(3,3)=1+2+2+1+1+1=8.

Sample Input 2 
5 5
1 2 3 4 5
2 5
1 1 2
2 3
2 4
2 5
Sample Output 2 
35
8
17
31

*/