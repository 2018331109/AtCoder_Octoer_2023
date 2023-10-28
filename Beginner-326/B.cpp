#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
int mod = 1e9 + 7;

const int INF = 1e18;


int cal(int n)
{
    int nn=n;
    int a=n%10;
    n/=10;
    int b=n%10;
    n/=10;
    int c=n;

    if(c*b==a)
    {
        return nn;
    }
    else
    {
        return -1;
    }
}

void solve()
{
    int n;
    cin>>n;
    while(true)
    {
        int res=cal(n);
        if(res==-1)
        {
            n++;
            cal(n);
        }
        else
        {
            cout<<res<<endl;
            break;
        }
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

