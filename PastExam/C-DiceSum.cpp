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
 
vector<vector<ll>> comb(int n, int r) {
    vector<vector<ll>> v(n + 1,vector<ll>(n + 1, 0));
    for (int i = 0; i < v.size(); i++) {
        v[i][0] = 1;
        v[i][i] = 1;
    }
    for (int j = 1; j < v.size(); j++) {
        for (int k = 1; k < j; k++) {
        v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]);
        }
    }
  return v[n][r];
}

int main(){
    int N, M, K;
    cin >> N >> M >> K;
    ll sum = 0;
    sum += M;
    reps(i, K-1){
        int start, j;
        if(i <= M) start = 1;
        else start = (i+1) - M;
        rep2(j, start, N)
            if(i < j) break;
            sum += comb(i, j);
    }
    cout << sum << endl;
    return 0;
}