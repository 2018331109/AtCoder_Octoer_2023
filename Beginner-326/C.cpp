#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
int mod = 1e9 + 7;

const int INF = 1e18;



void solve()
{
    int n, m;
    cin>>n>>m;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }


    sort(v.begin(), v.end());

    int mx = 0;
    int l = 0;
    for (int r = 0; r < n; ++r)
    {

        while (v[r] - v[l] >= m)
        {
            l++;
        }

        mx =  max(mx, r - l + 1);
    }

    cout << mx <<  endl;

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

