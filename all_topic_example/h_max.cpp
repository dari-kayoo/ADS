#include <iostream>
using namespace std;
struct maxHeap{
    int val[100];
    int hs;
    maxHeap(){
        hs = 0;
    }
    int get_max(){
        return val[0];
    }
    void add(int x){
        int i = hs;
        hs++;
        val[i] = x;
        int p = (i-1)/2;
        while(i!=0 and val[i] > val[p]){
            swap(val[i], val[p]);
            i = p;
            p = (i-1)/2;
        }
    }
    void print(){
        for(int i = 0; i < hs; i++){
            cout << val[i] << " ";
        }
    }
};
int main(){
    int n;
    cin >> n;
    int a[n];
    maxHeap h;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        h.add(a[i]);
    }
    cout << h.get_max() << endl;
    h.print();
    return 0;
}