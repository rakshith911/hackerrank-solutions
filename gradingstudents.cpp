#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a;
    vector<int> ar;
    for(int i = 40; i <= 100 ; i=i+5)
        ar.push_back(i);
        cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        bool b = true;
        for(int j = 0; j < ar.size(); j++){
            if(ar[j] - a < 3 && (ar[j] - a) > 0){
                cout << ar[j] << endl;
                b = false;
                break;
            }
        }
        if(b)cout << a << endl;
    }
}
