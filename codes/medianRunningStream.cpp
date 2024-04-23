#include<bits/stdc++.h>
using namespace std;
priority_queue<int> maxH;
priority_queue<int,vector<int>,greater<int>> minH;
    int m=0,n=0;
    void insertHeap(int x)
    {
        if(m==n){
            if(m==0){
                maxH.push(x);
                m++;
            }else{
                if(minH.top()<x){
                    minH.push(x);
                    n++;
                }else{
                    maxH.push(x);
                    m++;
                }
            }
        }else{
            if(m<n){
                if(minH.top()<x){
                    minH.push(x);
                    maxH.push(minH.top());
                    minH.pop();
                }else{
                    maxH.push(x);
                }
                m++;
            }else{
                if(maxH.top()>x){
                    maxH.push(x);
                    minH.push(maxH.top());
                    maxH.pop();
                }else{
                    minH.push(x);
                }
                n++;
            }
        }
    }
    
    double getMedian()
    {
        if(m==n){
            return (maxH.top()+minH.top())/2.0;
        }
        if(m>n) return maxH.top();
        return minH.top();
    }
int main(){
    insertHeap(10);
    cout<<getMedian()<<endl;
    insertHeap(5);
    cout<<getMedian()<<endl;
    insertHeap(15);
    cout<<getMedian()<<endl;
}