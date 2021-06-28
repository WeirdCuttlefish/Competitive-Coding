#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solution(){
    int x;
    cin >> x;
    vector<char> arr;
    for(int i = 0; i<x; i++){
        char temp;
        cin >> temp;
        arr.push_back(temp);
    }
    bool running = true;
    while(arr.size() > 3 && running){

        int middle = (arr.size()-1)/2;
        int l = middle;
        int h = arr.size()+1;

        while(arr[l] != 'M' && l > 0){
            l++;
        } 
        while(arr[h] != 'M' && h < arr.size()){
            h--;
        }

        if(arr[l] != 'M' && arr[h] != 'M'){
            cout << "NO";
            running = false;
            break;
        }

        if(arr[l] != 'M'){
            int m = h;
            int l = m-1;
            int h = m+1;

        }else if(arr[h] != 'M'){
            int m = l;
            int l = m-1;
            int h = m+1;

            while(l > 0 && arr[l] != 'T'){
                l--;
            }
            while(h < arr.size() && arr[h] != 'T'){
                h++;
            }

            if(arr[h]!='T' || arr[l]!='T'){
                cout << "NO2" << endl;
                running = false;
                break;
            }
            cout << l << " " << m << " " << h <<  " ";
            arr.erase(arr.begin()+l);
            arr.erase(arr.begin()+m);
            arr.erase(arr.begin()+h);

            break;
        }else{
            int m;
            if(middle - l > h - middle){
                m = h;
            }else{
                m = l;
            }

            int l = m-1;
            int h = m+1;

        }
    }

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    if(arr.size() == 3 && arr[0] == 'T' && arr[1] == 'M' && arr[2] == 'T'){
        cout << "YES";
    }else{
        cout << "NO";
    }
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