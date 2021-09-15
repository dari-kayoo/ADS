#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack <int> s;
int main(){
    char c;
    while(cin >> c){
        if(c >= 48 and c <= 57){
            int i = c - '0';
            s.push(i);
        }
        else if(c == '+'){
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(a+b);
        }else if(c == '-'){
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(b-a);
        }else if(c == '*'){
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(a*b);
        }
    }
    // while(!s.empty()){
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    
    cout << s.top();

    return 0;
}