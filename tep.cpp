/*

*/
#include <bits/stdc++.h>
using namespace std;
void tokenize(string s, string del = " ")
{
    int start = 0;
    int end = s.find(del);
    while (end != -1)
    {
        cout << s.substr(start, end - start) << endl;
        start = end + del.size();
        end = s.find(del, start);
    }
    cout << s.substr(start, end - start);
}
int main()
{
    string str = "KL Rahul (C), Ruturaj Gaikwad, Ishan Kishan, Deepak Hooda, Shreyas Iyer, Rishabh Pant (wk), Dinesh Karthik (wk), Hardik Pandya, Venkatesh Iyer, Yuzvendra Chahal, Kuldeep Yadav, Axar Patel, Ravi Bishnoi, Bhuvneshwar Kumar, Harshal Patel, Avesh Khan, Arshdeep Singh, Umran Malik.";
    tokenize(str, ",");
}