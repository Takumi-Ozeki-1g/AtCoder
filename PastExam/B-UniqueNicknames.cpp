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
    vector<string> s(N), t(N);
    multiset<string> mst;
    set<string> a_st;
    rep(i, N){
        cin >> s[i] >> t[i];
        mst.insert(s[i]);
        mst.insert(t[i]);
    }
    int cnt;
    rep(i, N){
        if(s[i] == t[i]){
            cnt = 2;
        }else cnt = 1;
        if(mst.count(s[i]) == cnt && a_st.find(s[i]) == a_st.end()){
            a_st.insert(s[i]);
        }else if(mst.count(t[i]) == cnt && a_st.find(t[i]) == a_st.end()){
            a_st.insert(t[i]);
        }else{
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}