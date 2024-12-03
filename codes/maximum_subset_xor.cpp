#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *links[2];
    int val;
    bool isChild(int bit)
    {
        return links[bit] != NULL;
    }
    Node *getChild(int bit)
    {
        return links[bit];
    }
    void createChild(int bit)
    {
        links[bit] = new Node();
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
    void insert(int prefix_xor)
    {
        Node *node = root;
        for (int i = 31; i >= 0; i--)
        {
            bool bit = prefix_xor & (1 << i);
            if (!node->isChild(bit))
            {
                node->createChild(bit);
            }
            node = node->getChild(bit);
        }
        node->val = prefix_xor;
    }
    int get_max_xor(int prefix_xor)
    {
        Node *node = root;
        for (int i = 31; i >= 0; i--)
        {
            bool bit = prefix_xor & (1 << i);
            if (node->isChild(1 ^ bit))
            {
                node = node->getChild(bit ^ 1);
            }
            else
            {
                node = node->getChild(bit);
            }
        }
        return prefix_xor ^ (node->val);
    }
};

class Solution
{
public:
    int maxSubsetXOR(int a[], int n)
    {
        Trie trie;
        trie.insert(0);
        int ans = INT_MIN, prefix_xor = 0;
        for (int i = 0; i < n; i++)
        {
            prefix_xor ^= a[i];
            trie.insert(prefix_xor);
            ans = max(ans, trie.get_max_xor(prefix_xor));
        }
        return ans;
    }
};

int main()
{
    int t, n, a[100004], k;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        Solution obj;
        printf("%d\n", obj.maxSubsetXOR(a, n));
        cout << "~" << "\n";
    }
}