#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *links[2];
    bool containsBit(int bit)
    {
        return links[bit] != NULL;
    }
    void createReferrence(int bit)
    {
        links[bit] = new Node();
    }
    Node *getReferrence(int bit)
    {
        return links[bit];
    }
};

class Trie
{
private:
    Node *root;

public:
    Trie()
    {
        root = new Node();
    }
    void insert(int a)
    {
        Node *node = root;
        for (int i = 31; i >= 0; i--)
        {
            int bit = (a >> i) & 1;
            if (!node->containsBit(bit))
            {
                node->createReferrence(bit);
            }
            node = node->getReferrence(bit);
        }
    }
    int get_xor(int a)
    {
        Node *node = root;
        int eor = 0;
        for (int i = 31; i >= 0; i--)
        {
            int bit = (a >> i) & 1;
            if (node->containsBit(1 - bit))
            {
                node = node->getReferrence(1 - bit);
                eor ^= (1 << i);
            }
            else
                node = node->getReferrence(bit);
        }
        return eor;
    }
};

class Solution
{
public:
    int max_xor(int a[], int n)
    {
        // code here
        int ans = 0;
        Trie trie;
        for (int i = 0; i < n; i++)
        {
            trie.insert(a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, trie.get_xor(a[i]));
        }
        return ans;
    }
};
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        Solution ob;
        cout << ob.max_xor(a, n) << endl;

        cout << "~" << "\n";
    }
}