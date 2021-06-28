#include <bits/stdc++.h>

using namespace std;

#define um unordered_map
#define endl "\n"

typedef long long ll;
typedef vector<int> vi;

void solution(){
    //-+**CODE HERE**+-
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    
    if((double) b / (double) m < (double) a){
        //If multis cost less
        int s = n%m;
        int mu = n/m;
        int ret = min((s*a) + (mu*b), (mu+1)*b);
        cout << ret;
    }else{
        cout << (n*a);
    }
    //-+**CODE HERE**+-
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    //TOUCHABLE
    int testcases = 1;
    //cin >> testcases;
    for(int tn = 1; tn <= testcases; tn++){
        //cout << "Case #" << tn << ": ";
        solution();
    }
    return 0;
}