#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
int main()
{
    // set<int,greater<int>> s;
    unordered_set<int> s;
    s.insert(1);
    s.insert(6);
    s.insert(2);
    s.insert(5);
    s.insert(6);
    for(auto it: s){
        cout<<it<<" ";
    }
    cout<<"\n";
    //cout<<*s.lower_bound(5)<<"\n";
    //cout<<*s.upper_bound(4)<<"\n";
    return 0;
}