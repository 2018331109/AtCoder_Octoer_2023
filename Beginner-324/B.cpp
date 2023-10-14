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

    int x=0;
    while(n%2==0)
    {
        n/=2;
        x++;
    }
    if(n==1)
    {
        yes;
        return;
    }
    while(n%3==0)
    {
        n/=3;
    }
    if(n==1)
    {
        yes;
        return;
    }
    no;

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

