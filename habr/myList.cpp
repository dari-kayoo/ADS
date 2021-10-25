#include <iostream>
using namespace std;
struct list{
    int memory[100];
    int len;
    list(){
        memory[100];
        len = 0;
    }
    int get(int address){
        return memory[address];
    }
    void push(int value){
        memory[len] = value;
        len++;
    }
    int pop(){
        if (len == 0) return 0;
        int lastAddress = len-1;
        int val = memory[lastAddress];
        delete &memory[lastAddress];
        len--;
        return val;
    }
    void unshift(int value){
        int previous = value;
        for(int address = 0; address < len; address++){
            int current = memory[address];
            memory[address] = previous;
            previous = current; 
        }
        memory[len] = previous;
        len++;
    }
    int shift(){
        if(len == 0) return 0;
        int firstAddress = memory[0];
        for(int address = 0; address < len; address++){
            memory[address] = memory[address+1];
        }
        delete &memory[len-1];
        len--;
        return firstAddress;

    }
};
int main(){
    int n;
    cin >> n;
    int a[100];
    list l;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        l.push(a[i]);
    }
    l.pop();
    l.shift();
    l.unshift(8);
    for(int i = 0; i < l.len; i++){
        cout << l.get(i) << " ";
    }
    
    return 0;
}