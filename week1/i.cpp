#include <iostream>
#include <stack>
using namespace std;
stack<int> s;
int main(){
    int n, cnt;
    cin >> n;
    int size;
    int tmp;
    for(int i = 1; i <= n; i++){
        cin >> size;
        while(size){      
            cin >> tmp;
            s.push(tmp);
            size--;
        }
    }
    for(int i = 1; i <= n; i++){
        while (!s.empty())
        {
            if(s.top() == i){
                
            }
        }
        
    }
     
    
    
    
    

    return 0;
}