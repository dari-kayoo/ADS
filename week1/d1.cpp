#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <string> m9, m10, m11;
int main()
{
    int n;
    string name;
    while(cin >> n >> name){
        if(n == 9){
            m9.push_back(name);
        }
        else if(n == 10){
            m10.push_back(name);
        }
        else{
            m11.push_back(name);
        }
    }
    for(int i = 0; i < m9.size() ; i++){
        cout << 9 << " " << m9[i] << endl;
    }
    for(int i = 0; i < m10.size() ; i++){
        cout << 10 << " " << m10[i] << endl;
    }
    for(int i = 0; i < m11.size() ; i++){
        cout << 11 << " " << m11[i] << endl;
    }


    
    return 0;
}