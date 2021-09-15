#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int n;
string name;
map <string, int> m;

int main(){
    while(cin >> n >> name){
        m[name] = n;
    }
    
    for(auto &it : m){
        cout << it.second << " " << it.first << endl;
    }
    

    return 0;
}
