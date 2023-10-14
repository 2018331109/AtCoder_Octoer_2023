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

    set<int>st;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        st.insert(x);

    }

    if(st.size()==1)
    {
        yes;
    }
    else
    {
        no;
    }

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

