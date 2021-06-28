#include <bits/stdc++.h>

using namespace std;

#define um unordered_map

typedef long long ll;
typedef vector<int> vi;

void solution(){
    //-+**CODE HERE**+-
    int p, h;
    int ret = 1;
    int min = 0;
    int cur;
    cin >> p;
    cin >> h;

    vector<int> fence;
    
    for(int i = 0; i < p; i++){
        int temp;
        cin >> temp;
        fence.push_back(temp);
    }

    for(int i = 0; i < h; i++){
        min+=fence[i];
    }
    
    cur = min;

    for(int i = 1; i < fence.size()-h+1; i++){
        cur -= fence[i-1];
        cur += fence[i+h-1];
        
        if(cur < min){
            min = cur;
            ret = i+1;
        }
    }

    cout << ret;
    //-+**CODE HERE**+-
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    //TOUCHABLE
    int testcases = 1;
    //cin >> testcases;
    for(int tn = 1; tn <= testcases; tn++){
        //cout << "Case #" << t << ": ";
        solution();
    }
    return 0;
}