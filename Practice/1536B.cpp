#include <bits/stdc++.h>

using namespace std;

#define um unordered_map

typedef long long ll;
typedef vector<int> vi;

string next(string test){
    if(test[test.size()-1] == 'z'){
        int i = test.size()-1;
        while(i != 0 && test[i] == 'z'){
            i--;
        }
        if(i == 0){
            string temp = "";
            for(int i = 0; i <= test.size(); i++){
                temp += "a";
            }
            return temp;
        }else{
            test[i]+=1;
            i++;
            while(i < test.size()){
                test[i] = 'a';
                i++;
            }
            return test;
        }
    }else{
        test[test.size()-1]+=1;
        return test;
    }
}

void solution(){
    //-+**CODE HERE**+-
    int n;
    string f;
    string ret = "a";
    cin >> n;
    cin >> f;
    while(f.find(ret)!=-1){
        ret = next(ret);
    }
    cout << ret << "\n";
    //-+**CODE HERE**+-
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    //TOUCHABLE
    int testcases = 1;
    cin >> testcases;
    for(int tn = 1; tn <= testcases; tn++){
        //cout << "Case #" << tn << ": ";
        solution();
    }
    return 0;
}