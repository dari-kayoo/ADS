#include <iostream>
#include <string>
using namespace std;
#define SIZE 100000
struct deque
{
    int storage[SIZE];
    int _size = 0, start = 0, end = 0;
    void push_front(int n)
    {
        if (_size == SIZE) { cout << "Full\n"; }
        else if (_size == 0) { storage[start] = n; _size++; }
        else { 
            if (start == 0) { start = SIZE - 1; storage[start] = n; _size++; }
            else { start--; storage[start] = n; _size++; }
            }
    }
    void push_back(int n)
    {
        if (_size == SIZE) { cout << "Full\n"; }
        else if (_size == 0) { storage[end] = n; _size++; }
        else {
            if (end == SIZE-1) { end = 0; storage[end] = n; _size++; }
            else { end++; storage[end] = n; _size++; }
        }
    }
    int pop_front()
    {
        int b;
        if (_size != 0 && (start == end)) { b = storage[start]; _size--; return b; }
        else if (_size == 0) { return -1; }
        else
        {
            b = storage[start];
            if (start == SIZE - 1) { start = 0; _size--; }
            else { start++; _size--; }
            return b;
        }
    }
    int pop_back()
    {
        int b;
        if (_size != 0 && (start == end)) { b = storage[end]; _size--; return b; }
        else if (_size == 0) { return -1; }
        else
        {
            b = storage[end];
            if (end == 0) { end = SIZE - 1; _size--; }
            else { end--; _size--; }
            return b;
        }
    }
    int front() { return storage[start]; } // if (_size == 0) return -1; else
    int back() {  return storage[end]; }
    int size() { return _size; }
    void clear()
    {
        _size = 0;
        start = end = 0; 
    }
};
 
int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    deque d;
    string s;
    int n;
    while (cin >> s)
    {
        if (s == "push_front")
        {
            cin >> n;
            d.push_front(n);
            cout << "ok\n";
        }
        else if (s == "push_back")
        {
            cin >> n;
            d.push_back(n);
            cout << "ok\n";
        }
        else if (s == "pop_front")
        {
            cout << d.pop_front() << "\n";
        }
        else if (s == "pop_back")
        {
            cout << d.pop_back() << "\n";
        }
        else if (s == "front")
        {
            cout << d.front() << "\n";
        }
        else if (s == "back")
        {
            cout << d.back() << "\n";
        }
        else if (s == "size")
        {
            cout << d.size() << "\n";
        }
        else if (s == "clear")
        {
            d.clear();
            cout << "ok\n";
        }
 
        else if (s == "exit") {
            cout << "bye\n";
            return 0;
        }
    }
    return 0;
}