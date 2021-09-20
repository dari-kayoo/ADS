#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <map>

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
    for(auto &it : m){
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
