//if duplicates are present if it will return same permuatation multiple times
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<vector<int>> ans;
void permute(vector<int> a, int idx)
{
    if (idx == a.size())
    {
        ans.push_back(a);
        return;
    }
    for (int i = idx; i < a.size(); i++)
    {
        swap(a[idx], a[i]);
        permute(a, idx + 1);
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    permute(a, 0);
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
}