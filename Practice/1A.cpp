#include <bits/stdc++.h>

using namespace std;

#define um unordered_map

typedef long long ll;
typedef vector<int> vi;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    //TOUCHABLE
    int testcases = 1;
    //cin >> tc;
    for(int tn = 1; tn <= testcases; tn++){
        //cout << "Case #" << t << ": ";
        //-+***CODE HERE***+-
        ll h, w, s;
        cin >> h;
        cin >> w;
        cin >> s;
        if(h%s!=0)
            h+=(s-h%s);
        if(w%s!=0)
            w+=(s-w%s);
        ll a = (h*w)/(s*s);
        cout << a;
        //-+***CODE HERE***+-
    }
    return 0;
}