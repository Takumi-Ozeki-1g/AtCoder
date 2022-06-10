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
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N) cin >> a[i];
    vector<vector<ll>> DP(N, vector<ll>(N+1, 0));
    DP[0][0] = a[N-1];
    DP[0][1] = a[0];
    reps(i, N-1){
        if(i%2==1) DP[i][0] = DP[i-1][0] - a[N-i-1];
        else DP[i][0] = DP[i-1][0] + a[N-i-1];
    }
    reps(i, N-1){
        reps(j, N){
            if(j-i==1){
                if(i%2==1) DP[i][j] = DP[i-1][j-1] - a[j-1];
                else DP[i][j] = DP[i-1][j-1] + a[j-1];
                break;
            }else{
                if(i%2==1) DP[i][j] = min(DP[i-1][j-1] - a[j-1], DP[i-1][j] - a[N-1-(i-j)]);
                else DP[i][j] = max(DP[i-1][j-1] + a[j-1], DP[i-1][j] + a[N-1-(i-j)]);
            }
        }
    }
    rep(i, N+1){
        rep(j, N) cout << DP[j][i] << "\t";
        cout << endl;
    }
    ll minmax_;
    if(N%2==1){
        minmax_ = INF;
        rep(j, N+1) chmin(minmax_, DP[N-1][j]);
    }else{
        minmax_ = -INF;
        rep(j, N+1) chmax(minmax_, DP[N-1][j]);
    }
    cout << minmax_ << endl;
    return 0;
}