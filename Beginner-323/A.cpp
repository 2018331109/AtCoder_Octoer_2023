#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define no cout<<"No"<<endl;
#define yes cout<<"Yes"<<endl;
#define neg cout<<-1<<endl;

const int mod=1e9+7;

void solve()
{
    string s;
    cin>>s;
    int n=16;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='1' && i%2)
        {
            no;
            return;
        }
    }
    yes;

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


