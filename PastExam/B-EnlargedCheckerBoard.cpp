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
    int N, A, B;
    cin >> N >> A >> B;
    vector<string> S(N*A, "");
    char ch;
    rep(i, N){
        rep(j, A){
            rep(k, N){
                if((i+k) % 2 == 0) ch = '.';
                else ch = '#';
                rep(l, B){
                    S[i*A+j] += ch;
                }
            }
        }
    }
    rep(i, N*A) cout << S[i] << endl;
    return 0;
}