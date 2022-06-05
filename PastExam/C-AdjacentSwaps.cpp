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
    int N, Q, x;
    cin >> N >> Q;
    unordered_set<int> a; 
    rep(i, N) a.insert(i+1);
    rep(i, Q){
        cin >> x;
        auto x_itr = a.find(x);
        if(x_itr++ != a.end()) iter_swap(x_itr, x_itr++);
        else{
            auto itr = x_itr;
            rep(j, N-1) itr++;
            iter_swap(x_itr, itr);
        }
    }
    auto itr = a.begin();
    rep(i, N){
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}