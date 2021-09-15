#include <iostream>
#include <string>
using namespace std;
 
struct deq{
    int a[1000];
    int end=0;
    int sizze=0;
    int start=1;
    int lol=100;

    int push_back(int x){
        end = (end + 1)%lol;
        a[end] = x;
        sizze++;
    }
    int push_front(int x){
        start = (start - 1+lol)%lol;
        a[start] = x;
        sizze++;
    }               
                    
    void pop_back(){
        end = (end - 1+lol)%lol;
        sizze--;}
    void pop_front(){
        start = (start + 1)%lol;
        sizze--;
    }           
                
    int back() const{
        return a[end];
    }
    int size() const{
        return sizze;
    }
    void clear(){
        end = 0;
        sizze = 0;
        start = 1;
    }
                
    int front() const{
        return a[start];
    }
    
};
 
int main() {
    
    deq d;
    string str;
    int n;
    
    while(cin >> str){
        if(str == "push_back"){
            cin >> n;
            d.push_back(n);
            cout << "ok" << endl;
        }else if(str == "push_front"){
            cin >> n;
            d.push_front(n);
            cout << "ok" << endl;
        }else if(str == "pop_back"){
            if(d.size()){
                cout << d.back() << endl;
                d.pop_back();
            }else{
                cout << "error" << endl;
            }
        }else if(str == "pop_front"){
            if(d.size()){
                cout << d.front() << endl;
                d.pop_front();
            }else{
                cout << "error" << endl;
            }
        }else if(str == "front"){
            if(d.size()){
                cout << d.front() << endl;
            }
            else{
                cout << "error" << endl;
            }
        }          
        else if(str == "back"){
            if(d.size()){
                cout << d.back() << endl;
            }else{
                cout << "error" << endl;
            }
        }else if(str == "size"){
            cout << d.size() << endl;
        }else if(str == "clear"){
            d.clear();
            cout << "ok" << endl;
        }else if(str == "exit"){
            cout << "bye" << endl;
            break;
        }
    }
    return 0;
}