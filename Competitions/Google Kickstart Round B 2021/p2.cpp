#include <iostream>
#include <string>
#include <vector>

#define vi vector<int>

using namespace std;

void solution(){
    int n;
    cin >> n;
    int a[n];
    int d[n-1];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    for(int i = 0; i<n-1; i++){
        d[i] = a[i+1] - a[i];
    }

    int tr = 0; //temp return
    int ti = 0; //indices
    int i = 0; 
    int ret = 0; //return
    int c = 1; //chances

    bool running = true;

    while(running){
        if(d[i] == d[i-1]){//If difference d+1
            tr++;
        }else{
            if(i < n - 4 && d[i] == d[i+3] && c == 1 && (d[i+1] + d[i+2])/2 == d[i]){
                ti = i + 1;
                tr++;
                c--;
                i = i+2;
            }else{
                if(tr > ret){
                    ret = tr;
                }
                i = ti;
                ti++;
                c = 1;
            }
        }
        if(i >= n-1){
            i = ti;
        }
        if(ti >= n-1){
            break;
        }
        i++;
    }

    cout << (ret + 1) << endl;


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