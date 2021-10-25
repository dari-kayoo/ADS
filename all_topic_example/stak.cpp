#include <iostream>
using namespace std;
struct stak
{
    int a[100];
    int topIndex;
    stak()
    {
        topIndex = -1;
    }
    int top()
    {
        if (topIndex == -1) return -1;
        return a[topIndex];
    }
    void push(int x)
    {
        topIndex++;
        a[topIndex] = x;
    }
    void pop()
    {
        if (topIndex == -1)
            cout << "error" << endl; 
        else
        {
            cout << a[topIndex] << endl;
            topIndex--;
        }
    }
    int size()
    {
        return topIndex + 1;
    }
    void clear()
    {
        topIndex = -1;
    }
};

int main()
{
    stak s;
    string str;
    while (cin >> str)
    {
        if (str == "push")
        {
            int v;
            cin >> v;
            s.push(v);
            cout << "ok" << endl;
        }
        else if (str == "pop")
        {
            s.pop();
        }
        else if (str == "back")
        {
            if(s.top() == -1) cout << "error" << endl;
            else cout << s.top();
            
        }
        else if (str == "size")
        {
            cout << s.size() << endl;
        }
        else if (str == "clear")
        {
            s.clear();
            cout << "ok" << endl;
        }
        else if (str == "exit")
        {
            cout << "bye";
            break;
        }
    }
    return 0;
}