#include <bits/stdc++.h>

using namespace std;

#define um unordered_map
#define endl "\n"

typedef long long ll;
typedef vector<int> vi;

void solution(){
    //-+**CODE HERE**+-
    int b, g;
    vi boys, girls;
    cin >> b;
    for(int i = 0; i < b; i++){\
        int temp;
        cin >> temp;
        boys.push_back(temp);
    }
    cin >> g;
    for(int i = 0; i < g; i++){\
        int temp;
        cin >> temp;
        girls.push_back(temp);
    }

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    int ret = 0;
    int i = 0;
    int j = 0;
    while(i < boys.size() && j < girls.size()){
        if(abs(boys[i] - girls[j]) <= 1){
            ret++;
            j++;
            i++;
        }else if(boys[i] > girls[j]){
            j++;
        }else{
            i++;
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
        //cout << "Case #" << tn << ": ";
        solution();
    }
    return 0;
}