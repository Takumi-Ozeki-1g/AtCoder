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
    vector<vector<int>> data(3, vector<int>(N));
    vector<ll> DP(N,-INF)
    vector<int> max(N, -1)
    rep(i,N){
        cin >> data.at(i).at(0) >> data.at(i).at(1) >> >> data.at(i).at(2) 
    }
    rep(i, N){
        rep(j, 3){
            chmax(max[i], data.at(i).at(j))
        }
    }
    reps(i, N-2){
        rep(j, 3){
            int max_next;
            if (chmax(max_next, data.at(i+1).at(j)))
                what[i+1] = j
            if what[i-1] = j{
                break;
            }else if(chmax(DP[i], DP[i-1]+data.at(i).at(j))){
                what[i] = j
            }
        }
        if (what[i] == what[i+1]){
            rep()
        }
    
    }
    return 0;
}