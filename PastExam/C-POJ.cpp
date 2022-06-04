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
    vector<string> S(N);
    vector<ll> T(N);
    set<string> org;
    ll T_max = -INF;
    int max_i;
    rep(i, N){
        cin >> S[i] >> T[i];
        if(org.find(S[i]) == org.end()){
            org.insert(S[i]);
            if(chmax(T_max, T[i])) max_i = i+1;
        }
    }
    cout << max_i << endl;;
    return 0;
}