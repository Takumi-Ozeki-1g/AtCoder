#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define reps(i,n) for(int i=1;i<=(int)(n);i++)
#define rrep(i,n) for(int i=((int)(n)-1);i>=0;i--)
#define rreps(i,n) for(int i=((int)(n));i>0;i--)
#define rep2(i,s,n) for(int i=(s);i<(int)(n);i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
template<class T> bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<class T> bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}
const ll INF = 1LL << 60;
 
int main(){
    ll N, W;
    cin >> N >> W;
    vector<ll> w(N, 0);
    vector<ll> v(N, 0);
    rep(i, N) cin >> w[0] >> v[0];
    vector<vector<ll>> DP(N+5, vector<ll>(100010,INF));
    DP[0][v[0]] = w[0];
    DP[0][0] = 0;
    reps(i,N-1){
        rep(j,100010){
            if(DP[i-1][j]==INF) continue;
            ll sum = w[i] + DP[i-1][j];
            DP[i][j+v[i]] = min(sum, DP[i-1][j+v[i]]);
            chmin(DP[i][j], DP[i-1][j]);
            cout << i << ' ' << j << ' ' << DP[i][j] << endl;
        }
    }
    ll max;
    rrep(i,100010){
        if (DP[N-1][i] <= W){
            max = i;
            break;
        }
    }
    cout << max << endl;
    return 0;
}