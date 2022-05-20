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
    int N, K;
    cin >> N >> K;
    vector<ll> h(N, 0);
    rep(i,N){
        cin >> h[i];
    }
    vector<ll> DP(N, INF);
    DP[0] = 0;
    rep(i, N){
        rep(j, i){
            if(j - i > K) break;
            chmin(DP[i], DP[j])
        }
    }
    cout << DP[N-1] << endl;
    return 0;
}
