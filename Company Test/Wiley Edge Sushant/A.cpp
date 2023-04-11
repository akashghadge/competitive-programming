#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char ch;
    cin >> a >> ch >> b;
    set<char> st;
    st.insert('/');
    st.insert('*');
    st.insert('+');
    st.insert('-');
    if (st.find(ch) == st.end())
    {
        cout << "Exception: The operator is not valid";
    }
    else if (ch == '/' and b == 0)
    {
        cout << "Exception: Division by Zero";
    }
    else
    {
        if (ch == '-')
            cout << a - b << endl;
        if (ch == '+')
            cout << a + b << endl;
        if (ch == '*')
            cout << a * b << endl;
        if (ch == '/')
            cout << a / b << endl;
    }
}