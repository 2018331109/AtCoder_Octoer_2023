#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define no cout<<"No"<<endl;
#define yes cout<<"Yes"<<endl;
#define neg cout<<-1<<endl;

const int mod=1e9+7;

struct Player
{
    int number;
    int wins;

    bool operator<(const Player& other) const
    {
        if (wins != other.wins)
            return wins > other.wins;
        return number < other.number;
    }
};

void solve()
{
    int N;
    cin >> N;
    vector<vector<char>> results(N, vector<char>(N));


    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cin >> results[i][j];
        }
    }

    vector<Player> players(N);
    for (int i = 0; i < N; ++i)
    {
        players[i].number = i + 1;
        players[i].wins = 0;
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (results[i][j] == 'o')
            {
                players[i].wins++;
            }
        }
    }

    sort(players.begin(), players.end());

    for (int i = 0; i < N; ++i)
    {
        cout << players[i].number << " ";
    }

    cout << endl;

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


