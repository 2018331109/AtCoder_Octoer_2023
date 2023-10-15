#include<bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define neg cout<<-1<<end;
#define pb push_back

void solve()
{
    int n;
    cin>>n;
    int a[n];
    int m;
    cin>>m;
    int rm=n-m;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int ans=0;
    sort(a, a+n, greater<int>());
    int k=n-1;
    for(int i=0; i<m; i++)
    {
        int vl=a[i];
        if(m-i==rm)
        {
            vl+=a[k--];
            rm--;
        }
        ans+=(vl*vl);
    }

    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    //cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

