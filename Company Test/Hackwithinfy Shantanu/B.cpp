#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

const int SIZE = 26;
struct Node
{
    struct Node *children[SIZE];
    bool end_word;
};

struct Node *getN(void)
{
    struct Node *pNode = new Node;

    pNode->end_word = false;

    for (int i = 0; i < SIZE; i++)
        pNode->children[i] = NULL;

    return pNode;
}

void insert(struct Node *root, string str)
{
    struct Node *curr = root;

    for (int i = 0; i < str.length(); i++)
    {
        int index = str[i] - 'a';
        if (!curr->children[index])
            curr->children[index] = getN();

        curr = curr->children[index];
    }

    curr->end_word = true;
}
void dfs(Node *root, string curr, set<string> &possible)
{
    if (!root)
        return;
    if (root->end_word)
        possible.insert(curr);

    for (int i = 0; i < 26; i++)
    {
        char temp = 'a' + i;
        dfs(root->children[i], curr + temp, possible);
    }
}
void sol(vector<string> strs, int n)
{
    Node *root = getN();
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << -1 << en;
            insert(root, strs[i]);
        }
        else if (i == 1)
        {
            cout << strs[0] << en;
            insert(root, strs[i]);
        }
        else
        {
            string str = strs[i];
            Node *curr = root;
            string ans = "";
            for (int i = 0; i < str.size(); i++)
            {
                int index = str[i] - 'a';
                if (!curr->children[index])
                    break;
                ans += str[i];
                curr = curr->children[index];
            }
            set<string> possible;
            dfs(curr, "", possible);
            cout << ans;
            (possible.size() != 0) ? cout << *possible.begin() : cout << "";
            cout << en;
            insert(root, str);
        }
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    FAST;
    int n;
    cin >> n;
    vector<string> strs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> strs[i];
    }
    sol(strs, n);
    return 0;
}