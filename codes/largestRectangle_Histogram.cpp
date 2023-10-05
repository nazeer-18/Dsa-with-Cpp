#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i:v){
        cin>>i;
    }
    int maxArea=0,i=0;
    //if given vector is in ascending order make it fail by adding 0 at last ultimately its not in ascending order
    v.push_back(0);
    stack<int> st;
    //keeps indices whose heights are in non decreasing order
    while(i<=n){
        while(!st.empty() && v[st.top()] > v[i]){
            int height = v[st.top()];
            st.pop();
            if(st.empty()) {
                maxArea = max(maxArea,height*i);
            }
            else{
                maxArea = max(maxArea,height*(i-st.top()-1));
            }
            cout<<i<<" "<<maxArea<<endl;
        }
        st.push(i);i++;
    }
    cout<<maxArea<<endl;
}