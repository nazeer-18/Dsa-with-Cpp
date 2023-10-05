#include<iostream>
using namespace std;
int main(){

    // https://leetcode.com/submissions/detail/947401715/
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i = 0; i < n;i++) {
        for(int j = 0; j < m; j++){
            cin>>a[i][j];
        }
    }
    int rowStart = 0, rowEnd = n-1, colStart = 0, colEnd= m-1;
    while(rowStart <= rowEnd && colStart <= colEnd) {
        for(int i = colStart; i <=colEnd ; i++){
            cout<<a[rowStart][i]<<" ";
        }
        rowStart++;
        for(int i = rowStart;i<=rowEnd;i++){
            cout<<a[i][colEnd]<<" ";
        }
        colEnd--;
        for(int i = colEnd;i>=colStart && rowStart <= rowEnd;i--) {
            cout<<a[rowEnd][i]<<" ";
        }
        rowEnd--;
        for(int i = rowEnd;i>=rowStart && colStart  <= colEnd ;i--) {
            cout<<a[i][colStart]<<" ";
        }
        colStart++;
    }
}