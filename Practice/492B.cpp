#include <bits/stdc++.h>

using namespace std;

#define um unordered_map
#define endl "\n"

typedef long long ll;
typedef vector<int> vi;
typedef vector<double> vd;

void solution(){
    //-+**CODE HERE**+-
    int n, l;
    cin >> n;
    cin >> l;

    vector<long double> street;

    for(int i = 0; i < n; i++){
        long double temp;
        cin >> temp;
        street.push_back(temp);
    }

    sort(street.begin(), street.end());
    long double d = street[0];

    for(int i = 1; i < street.size(); i++){
        d = max(d, (street[i]-street[i-1])/2);
    }

    
    d = max(d, (l-street[street.size()-1]));

    cout << fixed << d;
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