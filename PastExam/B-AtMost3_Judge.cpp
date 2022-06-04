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
    int N, W, sum;
    cin >> N >> W;
    vector<int> A(N);
    set<int> st;
    rep(i, N){
        cin >> A[i];
        if(A[i] <= W) st.insert(A[i]);
    }
    rep(i, N-1){
        if(A[i] > W) continue;
        rep2(j, i+1, N){
            sum = A[i] + A[j];
            if(sum <= W) st.insert(sum);
        }
    }
    rep(i, N-2){
        if(A[i] > W) continue;
        rep2(j, i+1, N-1){
            if(A[i]+A[j] > W) continue;
            rep2(k, j+1, N){
                sum = A[i] + A[j] + A[k];
                if(sum <= W) st.insert(sum);
            }
        }
    }
    cout << st.size() << endl;
    return 0;
}