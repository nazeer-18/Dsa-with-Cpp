#include <bits/stdc++.h>
using namespace std;
class Array {
    public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};
class Solution {
    public:
    void formLis(vector<int>&nums,vector<int>&a,vector<int>tmp){
        int n=nums.size(),len=1;
        tmp.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(tmp.back()<nums[i]){
                len++;
                tmp.push_back(nums[i]);
                a[i]=len;
            }else{
                int lis=lower_bound(tmp.begin(),tmp.end(),nums[i])-tmp.begin();
                if(lis!=0) a[i]=lis+1;
                tmp[lis]=nums[i];
            }
        }
    }
    int LongestBitonicSequence(int n, vector<int> &nums) {
        int ans=0;
        vector<int> in(n,1),de(n,1);
        vector<int>tmp;
        formLis(nums,in,tmp);
        reverse(nums.begin(),nums.end());
        formLis(nums,de,tmp);
        reverse(de.begin(),de.end());
        for(int i=0;i<n;i++){
            if(in[i]>1 && de[i]>1) ans=max(ans,in[i]+de[i]-1);
        }
        return ans;
    }
};
int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<int> nums(n);
        Array::input(nums, n);
        Solution obj;
        int res = obj.LongestBitonicSequence(n, nums);
        cout << res << endl;
        cout << "~" << endl;
    }
}