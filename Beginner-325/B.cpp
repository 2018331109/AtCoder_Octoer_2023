#include<bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define neg cout<<-1<<endl;
#define pb push_back
int mod = 1e9+7;


void solve()
{
    int N;
    cin >> N;

    vector<int> W(N);
    vector<int> X(N);

    for (int i = 0; i < N; i++)
    {
        cin >> W[i] >> X[i];
    }

    int maxEmployees = 0;

    for (int meetingTime = 0; meetingTime < 24; meetingTime++)
    {
        int employeesAvailable = 0;

        for (int i = 0; i < N; i++)
        {
            int localStartTime = (X[i] + 9) % 24;
            int localEndTime = (X[i] + 18) % 24;

            if (localStartTime <= localEndTime)
            {
                if (localStartTime <= meetingTime && meetingTime < localEndTime)
                {
                    employeesAvailable += W[i];
                }
            }
            else
            {
                if (localStartTime <= meetingTime || meetingTime < localEndTime)
                {
                    employeesAvailable += W[i];
                }
            }
        }

        maxEmployees = max(maxEmployees, employeesAvailable);
    }

    cout << maxEmployees << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    // cin >> test;

    for(int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

