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
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    ll Taka = 0;
    ll Aoki = 0;
    ll time = 0;
    while(true){
        if(time + a > x){
            Taka += (x - time)*b;
            break;
        }
        Taka += a*b;
        time += a+c;
        if(time >= x) break;
    }
    time = 0;
    while(true){
        if(time + d > x){
            Aoki += (x - time)*e;
            break;
        }
        Aoki += d*e;
        time += d+f;
        if(time >= x) break;
    }
    if(Taka > Aoki) cout << "Takahashi" << endl;
    else if(Taka == Aoki) cout << "Draw" << endl;
    else cout << "Aoki" << endl; 
    return 0;
}