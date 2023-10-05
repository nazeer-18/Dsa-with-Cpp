#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[11]={1,1,1,0,0,0,1,1,1,1,0};
    int i = 0, j= 0, k = 2, ans= 0, zerocnt=0;
    for(j ; j < 11; j++) {
        if(a[j]==0) zerocnt++;
        while(zerocnt>k){
            if(a[i]==0) zerocnt--;
            i++;
        }
        ans = max(ans, j - i + 1);
    }
    return 0;
}