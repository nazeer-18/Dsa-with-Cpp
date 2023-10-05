#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
int main()
{
    vector <int> v1;
    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(6);
    for(int i = 0; i < v1.size(); i++) 
        cout<<v1[i]<<" ";
    cout<<endl;
    v1.pop_back();
    for(auto ele:v1)
        cout<<ele<<" ";
    cout<<endl;
    vector<int> :: iterator it;
    for(it = v1.begin();it!=v1.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    int n=2,m=3;
    vector<vector<int>> v2(n,vector<int> (m));
    vector<vector<int>> v3(n,vector<int> (m,-1));
    for(auto ele:v3){
        for(auto i : ele)
            cout<<i<<" ";
        cout<<endl; 
    }
    vector<int> v4 = {1,2,3};
    partial_sum(v4.begin(),v4.end(),v4.begin());
    for(auto ele:v4)
        cout<<ele<<" ";
    cout<<endl;
    int sum = accumulate(v4.begin(),v4.end(),0);
    cout<<sum<<endl;
    int maxi = *max_element(v4.begin(),v4.end());
    int mini = *min_element(v4.begin(),v4.end());
    cout<<maxi<<endl;
    cout<<mini<<endl;
    pair <int,int> p;
    p.first=10;
    p.second=8;
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    return 0;
}