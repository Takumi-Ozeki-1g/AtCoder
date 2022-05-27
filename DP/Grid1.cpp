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
    int H, W;
    cin >> H >> W;
    vector<vector<char>> a(H, vector<char>(W));
    rep(i, H){
        rep(j, W) cin >> a[i][j];
    }
    vector<vector<ll>> DP(H, vector<ll> (W, 0));
    DP[0][0] = 1;
    reps(i, H-1){
        if (a[i][0] == '.') DP[i][0] = 1;
        else break;
    }
    reps(i, W-1){
        if (a[0][i] == '.') DP[0][i] = 1;
        else break;
    }
    reps(i, H-1){
        reps(j, W-1){
            if(a[i][j]=='.'){
                DP[i][j] += DP[i-1][j] + DP[i][j-1];
                DP[i][j] %= (1000000000 + 7);
            }
        }
    }
    cout << DP[H-1][W-1] << endl;
    return 0;
}