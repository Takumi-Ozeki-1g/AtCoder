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
    ll H, W, a_i, a_j, b_i, b_j;
    cin >> H >> W;
    vector<string> S(H);
    rep(i, H) cin >> S[i];
    bool flag = true;
    rep(i, H){
        rep(j, W){
            if(flag == true & S[i][j] == 'o'){
                a_i = i;
                a_j = j;
                flag =false;
            }else if(flag == false & S[i][j] == 'o'){
                b_i = i;
                b_j = j;
            }
        }
    }
    cout <<  abs(a_i-b_i) + abs(a_j-b_j) << endl;
    return 0;
}