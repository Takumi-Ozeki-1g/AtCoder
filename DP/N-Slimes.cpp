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
    vector<ll> a(N);
    rep(i, N) cin >> a[i];
    vector<vector<ll>> DP(N-1, vector<ll>(N-1,INF));
    ll cost = 0;
    rep(j, N-1) DP[0][j] = a[j] + a[j+1];
    reps(i, N-2){
        rep(j, N-1){
            auto iter = min_element(DP[i].begin(), DP[i].end());
            vector<int> DP_i(N-1);
            rep(k,N-1) DP_i = DP[i][k];
            cost += DP_i[iter];
            a[j] = DP_i[iter];
            rep2(k, j+1, N-1){
                if(a[k] == -1) break;
                a[k] = a[k+1];
            }
            a[N-1] = -1;
        }
    }
    cout << cost << endl;
    return 0;
}