#include <bits/stdc++.h>

using namespace std;

#define um unordered_map
#define endl "\n"

typedef long long ll;
typedef vector<int> vi;

string cMin(int m, int s){
    string ret;
    for(int i = 0; i < m; i++){
        ret+=" ";
    }

    int latest = INT_MIN;
    
    for(int i = ret.size()-1; i >= 0; i--){
        if(s < 9){
            ret[i] = (char) 48+s;
            s = 0;
            latest = max(latest, i);
        }else{
            ret[i] = '9';
            s-=9;
        }
    }

    if(ret[0] == '0'){
        ret[0] = '1';
        int i = 1;
        while(ret[i] == '0'){
            i++;
        }
        ret[i] = (char) ret[i] - 1;
    }

    return ret;
}

string cMax(int m, int s){
    string ret;
    for(int i = 0; i < m; i++){
        if(s < 9){
            ret += " ";
            ret[ret.size()-1] = (char) 48+s;
            s = 0;
        }else{
            ret+="9";
            s-=9;
        }
    }
    return ret;
}
void solution(){
    //-+**CODE HERE**+-
    int m, s;
    cin >> m >> s;
    string min;
    string max;
    if(m*9 < s){
        min = "-1";
        max = "-1";
    }else if(m == 1){
        min = " ";
        min[0] = 48+s;
        max = min;
    }else if(s == 0){
        min = "-1";
        max = "-1";
    }else{
        min = cMin(m, s);
        max = cMax(m, s);
    }
    cout << min << " " << max;
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