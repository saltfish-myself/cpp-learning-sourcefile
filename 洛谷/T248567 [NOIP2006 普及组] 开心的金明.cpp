#include<iostream>
#include<algorithm>
using namespace std;
int w[30],v[30],dp[50000];
int n,m;
int main()
{
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i]>>w[i];
        w[i]*=v[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=m;j>=v[i];j--)
        {
            if(j>=v[i])
            {
                dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
            }
        }
    }
    cout<<dp[m]<<endl;
    return 0;
} 
