#include <iostream>
using namespace std;
struct hashTable{
    int memory[100];
    hashTable(){
        memory[100];
    }
    int hashKey(string key){
        int hash = 0;
        for(int i = 0; i < key.length(); i++){
            int code = key[i];
            hash = ((hash << 5) - hash) + code | 0;
        }
        return hash;
    }
    int get(string key){
        int address = hashKey(key);
        return memory[address];
    }
    void set(string key, int value){
        int address = hashKey(key);
        memory[address] = value;
    }
    void remove(string key){
        int address = hashKey(key);
        if(memory[address]) delete &memory[address];
    }
        
};
int main(){
    hashTable h;
    string str;
    int val = 0;
    while(cin >> str){
        h.set(str, val);
    }
    cout << h.get("love");
    
    
    return 0;
}