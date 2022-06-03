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
    int Q, n_x;
    cin >> Q;
    vector<int> status(Q), x(Q), c(Q);
    multiset<int> ms;
    rep(i, Q){
        cin >> status[i];
        if(status[i] == 1) cin >> x[i];
        else if(status[i] == 2) cin >> x[i] >> c[i];
    }
    rep(i, Q){
        if(status[i] == 1) ms.insert(x[i]);
        else if(status[i] == 2){
            rep(j, c[i]){
                auto fin = ms.find(x[i]);
                if(fin != ms.end()) ms.erase(fin);
                else break;
            }
        }else cout << *(--ms.end()) - *ms.begin()  << endl;
    }
    return 0;
}