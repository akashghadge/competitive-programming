/*
A vertex-induced subgraph of a simple graph G is one that can be obtained from G by removing some (possibly, none) vertices. When a vertex is removed, all edges incident to it must also be removed.

A vertex-induced cycle is a vertex-induced subgraph that is also a cycle.

Equivalently, a cycle C is vertex induced, if for every edge e in the graph G that does not belong to C, at most one of its ends lies on C.

You are given a simple undirected graph G with N vertices and M edges. Each edge has a label that is either 0 or 1.

In one move, you can select any vertex-induced cycle in G and flip the values of the label in all edges of the cycle, (i.e. change every 0 to a 1 and every 1 to a 0). The cost of one such move is equal to the size (i.e. number of edges) of the cycle. The total cost for a sequence of moves is the sum of the costs of each individual move.

Determine if there exists a sequence of moves after which all edges have label 0. If such a sequence exists, then find a sequence of moves whose total cost does not exceed 3⋅k, where k is the number of edges in G that have label 1 before any moves are done; otherwise, print −1.

It's guaranteed that if an answer exists, there exists a sequence of moves with a total cost not exceeding 3⋅k.

Note: Test data contains large input files. It is recommended that you use fast input/output methods.

Input Format
The first line of input contains an integer T, the number of test cases. The description of the T test cases follows.
The first line of each test case contains two space-separated integers N,M — the number of vertices and edges of the graph respectively.
The next M lines of each test case contain three space-separated integers u,v, and w, denoting an edge between vertices u,v with label w.
Output Format
For each test case, print the answer starting from a new line in the following format:
If it is impossible to convert all edge labels to 0 as per the statement, then print −1.
Otherwise, in the first line print the number of operations that you require to perform, (say x).
In the i-th of the next x lines, print the number of vertices of the cycle you choose in the i-th move followed by the vertices of the cycle. The vertices must be printed in either clockwise or anticlockwise order. That is, print s x1 x2 … xs to denote a cycle of size s whose edges are (x1,x2),(x2,x3),…,(xs−1,xs),(xs,x1).
If there are multiple correct outputs, you may print any of them.
Constraints
1≤T≤103
1≤N≤103
1≤M≤N(N−1)2
The sum of N over all test cases does not exceed 2000
The sum of k over all test cases does not exceed 5000
1≤u,v≤n
The given graph is a simple graph, i.e. there are no self loops or multiple edges
Subtasks
Subtask 1 (100 pts): Original constraints

Sample Input 1 
4
6 9
1 2 1
2 3 1
3 4 1
4 5 1
5 6 1
6 1 1
1 3 1
3 5 1
5 1 1
6 9
1 2 1
2 3 1
3 4 1
4 5 1
5 6 1
6 1 1
1 3 0
3 5 0
5 1 0
2 1
1 2 0
2 1
1 2 1
Sample Output 1 
5
3 3 4 5 
3 1 2 3 
3 1 3 5 
3 1 5 6 
3 1 3 5 
4
3 3 4 5 
3 1 2 3 
3 1 3 5 
3 1 5 6 
0
-1
Explanation
Test Case 1: In this example N=6,M=9 and k=9. The total cost of the sequence of moves given is 15. The graph and the sequence of moves are shown below.

JJqptiM.gif

Note that any solution for which the total cost is no more than 3⋅k=27 is also considered correct. For example another solution is shown below with total cost equal to 9.

onyz3pU.gif

Test Case 2: The graph is same as the previous testcase, except that the edge labels are different (k=6). After the first move, the resulting graph is identical to the first case. The total cost is 12 which is less than 3⋅k=18. The solution for this case is shown below.

JqEMJSL.gif

Note that the cycle formed by vertices 1,2,3,4,5,6 is not a vertex induced cycle.

Test Case 3: The graph does not have any edge with label 1, so no operations are required.

Test Case 4: The graph does not contain any cycles, and therefore it is impossible to flip the label of any edge (i.e. no valid move exists).


*/