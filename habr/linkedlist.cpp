#include <iostream> 
using namespace std;
struct node{
    int data;
    node *next = 0;
    node()
    {
        data = 0;
    }
    node(int _data)
    {
        data = _data;
    }
    node(int _data, node *_next)
    {
        data = _data;
        next = _next;
    }
};
struct ll{
    node *head;
    int len;
    node *get(int pos){
        if (pos >= len) return 0;
        node *cur = head;
        for(int i = 0; i < pos; i++){
            cur = cur->next;
        }
        return cur;
    }
    int get_val(int pos){
        return get(pos)->data;
    }
    void add(int value, int pos){
        if(pos == 0){
            node *new_head = new node(value, head);
            head = new_head;
        }else {
            node *prev = get(pos-1);
            node *cur = prev->next;
            node *new_node = new node(value, cur);
            prev->next = new_node;
        }
        len++;
    }
    void remove(int pos){
        if(pos == 0){
            head = head->next;
        } else{
            node *prev = get(pos-1);
            prev->next = prev->next->next;
            delete get(pos);
        }
        len--;
    }
};

int main(){
    ll l;
    int n;
    cin >> n;
    int a[100];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        l.add(a[i], i);
    }
    for(int i = 0; i < n; i++){
        cout << l.get_val(i) << " ";
    }

    return 0;
}