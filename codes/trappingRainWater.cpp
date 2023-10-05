#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    vector<int> v(n);
    for(auto &i : v){
        cin>>i;
    }
    stack<int> st;
    int i = 0;
    while(i<v.size()){
        while(!st.empty() && v[st.top()] < v[i]) {
            int h = v[st.top()];
            st.pop();
            if(!st.empty()){
                int w = i - st.top() - 1;
                ans+=w*(min(v[i]-h,v[st.top()]-h));
            }
        }
        st.push(i);
        i++;
    }
    cout<<ans<<endl;
    return 0;
}