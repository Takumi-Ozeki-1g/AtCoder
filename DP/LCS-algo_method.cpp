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
    string s, t;
    cin >> s;
    cin >> t;
    int s_size = s.size();
    int t_size = t.size();
    int temp = s_size;
    if (chmin(s_size, t_size)) t_size = temp;
    vector<vector<int>> DP(s_size, vector<int>(t_size, 0));
    rep(i, t_size){
        if(s[0] == t[i]){
            DP[0][i] ++;
            break;
        }
    }
    reps(i, s_size-1){
        int stock = 0;
        rep(j, t_size){
            DP[i][j] = DP[i-1][j];
            chmax(stock, DP[i][j]);
            if(s[i]==t[j]){
                DP[i][j] = stock + 1;
                stock = 0;
            }
        }
    }
    int maxlen = 0;
    rep(i, t_size){
        chmax(maxlen, DP[s_size-1][i]);
    }
    cout << maxlen << endl;
    return 0;
}