#include <bits/stdc++.h>

using namespace std;

#define um unordered_map

typedef long long ll;
typedef vector<int> vi;

double angle(double n){
    return ((n-2)*180)/n;
}

void solution(){
    //-+**CODE HERE**+-
    int n, x;
    cin >> n;
    x = 3;
    while(n > angle(x)){
        x++;
    }

    if(n == angle(x)){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }
    //-+**CODE HERE**+-
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    //TOUCHABLE
    int testcases = 1;
    cin >> testcases;
    for(int tn = 1; tn <= testcases; tn++){
        //cout << "Case #" << t << ": ";
        solution();
    }
    return 0;
}