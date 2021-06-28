#include <iostream>
#include <string>
#include <vector>
#include <math.h>

#define vi vector<int>

using namespace std;

bool checkPrime(int x){
    for(int i = 2; i<= x/2; i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}

void solution(){
    int n;
    cin >> n;
    int f = (n/2) + 1;
    int t1 = 0;
    int t2 = 0;
    
    while(t2 == 0){
        if(checkPrime(f)){
            if(t1 == 0){
                t1 = f;
            }else{
                t2 = f;
                if(t2*t1 <= n){
                    t2 = t2*t1;
                    break;
                }else{
                    t1 = f;
                    t2 = 0;
                }   
            }
        }
        f--;
    }
    

    cout << t2 << endl;
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