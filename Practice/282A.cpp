#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>;
#define ll long long;
#define iim unordered_map<int, int>;
#define cim unordered_map<char,int>;

void solution(int& x){
	bool changed = false;
	for(int i = 0; i < 3; i++){
		char temp;
		cin >> temp;
		if(temp == '-' && !changed){
			x--;
			changed = true;
		}
		if(temp == '+' && !changed){
			x++;
			changed = true;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tc = 1;
	cin >> tc;
	int x = 0;
	for(int t=1; t<=tc; t++){
		//cout << "Case #" << t << ": ";
		solution(x);
	}
	cout << x;
	return 0;
}
