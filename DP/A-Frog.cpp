#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define reps(i,n) for(int i=1;i<=(int)(n);i++)
#define rep2(i,s,n) for(int i=(s);i<(int)(n);i++)

void main(){
    int N;
    cin >> N;
    vector<int> h(N, 0);
    rep(i,N){
        cin >> h[i];
    }
    vector<int> DP(N, 0);
    DP[1] = abs(h[1]-h[0]);
    int a,b;
    rep2(i,2,N){
        a = DP[i-1]+abs(h[i]-h[i-1]);
        b = DP[i-2]+abs(h[i]-h[i-2]);
        DP[i] = min(a, b);
    }
    cout << DP[N-1] << endl;
    return
}