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
    vector<int> a(N);
    rep(i, N) cin >> a[i];
    vector<bool> DP(K+1, false);
    set<int> s;
    s.insert(0);
    reps(i, K+1){
        rep(j, N){
            if(s.find(i - a[j]) != s.end()){
                DP[i] = true;
                break;
            }
            if(j == N-1) s.insert(i);
        }
    }
    // rep(i, K+1) cout << DP[i];
    // cout << endl;
    string winner = "Second";
    if(DP[K]) winner = "First";
    cout << winner << endl;
    return 0;
}