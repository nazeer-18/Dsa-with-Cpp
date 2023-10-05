#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<" enter total number of kids \n";
    cin>>n;
    int candies[n];
    int extraCandies;
    bool result[n];
    int maxCandies=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        cout<<" enter number of candies of kid number : "<<i<<endl;
        cin>> candies[i];
        maxCandies=max(maxCandies,candies[i]);
    }
    cout<<" enter number of extra candies you have\n";
    cin>>extraCandies;
    for(int j=1;j<=n;j++)
    {
        candies[j]+=extraCandies;
        if(candies[j]>=maxCandies)
            result[j]=1;
        else    
            result[j]=0;
        candies[j]-=extraCandies;
    }
    for(int k=1;k<=n;k++)
        (result[k]==1)?cout<<" True ":cout<<" False ";
    return 0;
}