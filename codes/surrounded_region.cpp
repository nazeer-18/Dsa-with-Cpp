#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    void change(int n,int m,vector<vector<char>> &mat,int i,int j){
        mat[i][j]='*';
        vector<int> dx={-1,0,1,0},dy={0,1,0,-1};
        for(int k=0;k<4;k++){
            int x=i+dx[k],y=j+dy[k];
            if(x>=0 && x<n && y>=0 && y<m && mat[x][y]=='O'){
                change(n,m,mat,x,y);
            }
        }
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        for(int i=0;i<n;i++){
            if(mat[i][0]=='O'){
                change(n,m,mat,i,0);
            }
            if(mat[i][m-1]=='O'){
                change(n,m,mat,i,m-1);
            }
        }
        for(int i=0;i<m;i++){
            if(mat[0][i]=='O'){
                change(n,m,mat,0,i);
            }
            if(mat[n-1][i]=='O'){
                change(n,m,mat,n-1,i);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]=='*') mat[i][j]='O';
                else mat[i][j]='X';
            }
        }
        return mat;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
}
    return 0;
}