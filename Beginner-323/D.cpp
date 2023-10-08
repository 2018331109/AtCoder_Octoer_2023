#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long
#define pb push_back
#define no cout<<"No"<<endl;
#define yes cout<<"Yes"<<endl;
#define neg cout<<-1<<endl;

const int mod=1e9+7;




void solve()
{
    int n;
    cin>>n;
    map<int, int>mp;
    int a, b;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        mp[a]=b;
    }
    int ans=0;
    for(auto it:mp)
    {
        mp[it.first*2]+=(mp[it.first]/2);
        ans+=(it.second%2);
    }
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test=1;
    //cin>>test;
    for(int tc=1; tc<=test; tc++)
    {
        solve();
    }

}


