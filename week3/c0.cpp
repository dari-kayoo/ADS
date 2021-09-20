#include <iostream>
using namespace std;
int main(){
    int n, x;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int mx = -100000;
    int indMx;
    for(int i = 0;i < n; i++){
        if(a[i] > mx){
            mx = a[i];
            indMx = i+1;
        }
    }
    cout << indMx;
    return 0;
}