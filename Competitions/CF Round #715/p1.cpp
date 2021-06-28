#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solution(){
    int x;
    cin >> x;
    vector<int> odds;
    vector<int> evens;
    for(int i = 0; i < x; i++){
        int temp;
        cin >> temp;
        if(temp%2 == 0){
            evens.push_back(temp);
        }else{
            odds.push_back(temp);
        }
    }

    for(int i = 0; i < evens.size(); i++){
        cout << evens[i] << " ";
    }

    for(int i = 0; i < odds.size(); i ++){
        cout << odds[i] << " ";
    }
    
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solution();
    }
    return 0;
}