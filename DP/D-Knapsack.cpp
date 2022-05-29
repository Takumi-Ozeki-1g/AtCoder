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
    rep(i,N) cin >> w[i] >> v[i];
    vector<vector<ll>> DP(N+5, vector<ll>(W+5,-1));
    DP[0][w[0]] = v[0];
    DP[0][0] = 0;
    reps(i,N-1){
        rep(j,W+1){
            if(DP[i-1][j]==-1) continue;
            ll sum = j + w[i];
            if(sum <= W) chmax(DP[i][sum], DP[i-1][j] + v[i]);
            chmax(DP[i][j], DP[i-1][j]);
        }
    }
    ll max=-1;
    rep(i,W+1) chmax(max, DP[N-1][i]);
    cout << max << endl;
    /*rep(i,N){
        rep(j,W+1) cout << DP[i][j] << '\t';
        cout << endl;
    }I*/
    return 0;
}