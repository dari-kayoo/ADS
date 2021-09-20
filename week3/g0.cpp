#include <iostream>
using namespace std;
bool ch(int a[], int l, int r, int b[], int it){
    if(l > r) return false;
    int m = (l+r)/2;
    if(a[m] == b[it]) return true;
    if(a[m] < b[it]) return ch(a, m+1, r, b, it);
    else return ch(a, l, m-1, b, it);
}
void go(){
    int n, k;
    cin >> n >> k;
    int a[n], b[k];
    for(int i = 0; i < n; i++){
        cin >>a[i];
    }
    for(int i = 0; i < k; i++){
        cin >> b[i];
    }
    for(int i = 0; i < k; i++){
        if(ch(a, 0, n, b, i) == true){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
}
int main(){
    go();
    return 0;
}