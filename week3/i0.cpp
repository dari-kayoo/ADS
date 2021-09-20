#include <iostream>
using namespace std;
int first(int a[], int l, int r, int x[], int it){
    int middl = (l+r)/2;
    if(l > r) return 0;
    if(a[middl] == x[it]) return middl+1;
    if(a[middl] < x[it]) return first(a, middl+1, r, x, it);
    else return first(a, l, middl-1, x, it);
}
int second(int a[], int l, int r, int x[], int it){
    int middl = (l+r)/2;
    if(a[middl] == x[it]) return middl+1;
    if(a[middl] <= x[it]) return second(a, l, middl-1, x, it);
    else return second(a, middl+1, r, x, it);
}
int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    for(int i = 0; i < m; i++){
        cout << first(a, 0, n, b, i) << " ";
        cout << second(a, 0, n, b, i) << endl;
    }
    
    
    return 0;
}