#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector <char> v;
int main(){
    int n;
    cin >> n;
    string c;
    int cnt = 0;
    while(cin >> c){
        if(c == "-"){
            cnt++;
        }
    }
    for(int i = 1; i <= cnt; i++){
        cout << i << endl;
    }

    return 0;
}