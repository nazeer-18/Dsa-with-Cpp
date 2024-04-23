#include<bits/stdc++.h>
using namespace std;
bool helper(int a[9][9],map<pair<int,int>,map<int,int>>&mp,vector<map<int,int>>&row,vector<map<int,int>> &col,int r,int c){
        if(r==9){
            return true;
        }
        if(c==9){
            return helper(a,mp,row,col,r+1,0);
        }
        if(a[r][c]!=0) return helper(a,mp,row,col,r,c+1);
        for(int i=1;i<=9;i++){
            if(mp[{r/3,c/3}][i]==0 && row[r][i]==0 && col[c][i]==0){
                a[r][c]=i;
                mp[{r/3,c/3}][i]=1;
                row[r][i]=1;
                col[c][i]=1;
                bool op = helper(a,mp,row,col,r,c+1);
                if(op) return true;
                a[r][c]=0;
                row[r][i]=0;
                col[c][i]=0;
                mp[{r/3,c/3}][i]=0;
            }
        }
        return false;
    }
    bool SolveSudoku(int a[9][9])  
    { 
        map<pair<int,int>,map<int,int>>mp;
        vector<map<int,int>> row(9,map<int,int>());
        vector<map<int,int>> col(9,map<int,int>());
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(a[i][j]!=0) {
                    mp[{i/3,j/3}][a[i][j]]++;
                    row[i][a[i][j]]++;
                    col[j][a[i][j]]++;
                    if(mp[{i/3,j/3}][a[i][j]]>1 || row[i][a[i][j]]>1 || col[j][a[i][j]]>1) return false;
                }
                
            }
        }
        
        return helper(a,mp,row,col,0,0);
    }
    void printGrid (int a[9][9]) 
    {
        // Your code here 
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout<<a[i][j]<<" ";
            }
        }
    }
int main(){
    int a[9][9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>a[i][j];
        }
    }
    SolveSudoku(a);
    printGrid(a);
    return 0;
}
