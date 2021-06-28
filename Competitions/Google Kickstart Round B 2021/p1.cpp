#include <iostream>
#include <string>
#include <vector>

#define vi vector<int>

using namespace std;

void solution(){
    int size;
    cin >> size;
    int p = 0;
    char temp = '9';
    for(int i = 0; i < size; i++){
        char in;
        cin >> in;
        if((int) in > (int) temp){
            p++;
        }else{
            p = 1;
        }
        temp = in;
        cout << p << " ";
    }

    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        cout << "Case #" << t  << ": ";
        solution();
    }
    return 0;
}