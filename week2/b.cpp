#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <map>
#include <vector>

using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string str;
    map <string, int> m;
    while(cin >> str){
        m[str]+=1;
    }
    vector <pair<int, string>>v;
    for(auto it:m){
        v.emplace_back(it.second, it.first);
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i].second << " " << v[i].first<< endl;
    }
    
    return 0;
}