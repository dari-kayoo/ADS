#include <iostream>
using namespace std;
struct node
{
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
struct LList
{
    node *head = 0;
    node *get_tail()
    {
        if (head == 0)
            return 0;
        node *cur = head;
        while (cur->next != 0)
            cur = cur->next;
        return cur;
    }
    node *get(int i)
    {
        node *cur = head;
        for (int k = 0; k < i; k++)
        {
            if (cur == 0)
                return 0;
            cur = cur->next;
        }
        return cur;
    }
    void insert_begin(int data)
    {
        node *new_head = new node(data, head);
        head = new_head;
    }
    void insert_end(int data)
    {
        node *tail = get_tail();
        node *new_node = new node(data);
        tail->next = new_node;
    }
    void insert(int i, int data)
    {
        if (i == 0){
            insert_begin(data);
            return;
        }
        node *A = get(i - 1);
        if (A == 0)
        {
            insert_end(data);
            return;
        }
        node *B = A->next;
        node *new_node = new node(data, B);
        A->next = new_node;
        new_node->next = B;
    }
    void print()
    {
        node *cur = head;
        while (cur != 0)
        {
            cout << cur->data << " ";
            cur = cur->next;
        }
    }
};
int main()
{
    LList ll;
    
    return 0;
}