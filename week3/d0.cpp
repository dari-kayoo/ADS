#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    int mn[n], mx[m];
    for(int i =0; i < n; i++){
        mn[i] = 1000000;
    }
    for(int j = 0; j < m; j++){
        mx[j] = -1000000; 
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>> a[i][j];
            mn[i] = min(mn[i], a[i][j]);
            mx[j] = max(mx[j], a[i][j]);
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == mn[i] and a[i][j] == mx[j]){
                cnt++;
            }       
        }
    }
    cout << cnt;
    
    return 0;
}