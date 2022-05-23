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
    vector<vector<string>> DP(s_size, vector<string>(t_size, ""));
    rep(i, t_size){
        if(s[0] == t[i]){
            DP[0][i] = DP[0][i] + s[0];
            break;
        }
    }
    reps(i, s_size-1){
        string stock = "";
        rep(j, t_size){
            DP[i][j] = DP[i-1][j];
            /* cout << "i: " << i << " j: " << j << " " << DP[i][j] << endl; */
            if (stock.size() < DP[i][j].size() or stock=="") stock = DP[i][j];
            if(s[i] == t[j]){
                DP[i][j] = stock + s[i];
                stock = "";
            }
        }
    }
    string maxstr = "";
    rep(i, t_size){
        if (DP[s_size-1][i].size() > maxstr.size()) maxstr = DP[s_size-1][i];
    }
    cout << maxstr << endl;
    return 0;
}