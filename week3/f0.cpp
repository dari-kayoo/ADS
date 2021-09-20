#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int mx = -1000000;
    int mn = 1000000;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] < mn){
            mn = a[i];
        }
        if(a[i] > mx){
            mx = a[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(a[i] == mx){
            cout << mn << " ";
        }
        else cout << a[i] << " ";
    }
    return 0;
}
