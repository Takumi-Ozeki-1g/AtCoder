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
    vector<double> p(N);
    rep(i, N) cin >> p[i];
    vector<vector<double>> DP(N+1, vector<double>(N, 0.0));
    DP[0][0] = 1.0 - p[0];
    DP[1][0] = p[0];
    reps(i, N-1) DP[0][i] = DP[0][i-1]*(1.0-p[i]);
    reps(i, N){
        reps(j, N-1){
            DP[i][j] = DP[i-1][j-1]*p[j] + DP[i][j-1]*(1.0-p[j]);
        }
    }
    /*cout << endl;
    rep(i, N+1){
        rep(j, N) cout << DP[i][j] << '\t';
        cout << endl;
    }
    cout << endl;*/
    double sum = 0.0;
    rep2(i, int(N/2)+1, N+1) sum += DP[i][N-1];
    cout << setprecision(12) << sum << endl;
    return 0;
}