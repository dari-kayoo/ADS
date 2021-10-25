#include <iostream>
using namespace std;

struct st{
    int a[100];
    int topInd;
    st(){
        topInd = -1;
    }

    int top(){
        if(topInd == -1) return -1;
        return a[topInd];
    }
    int size(){
        return topInd+1;
    }

    void push(int x){
        topInd++;
        a[topInd] = x;
    }
    void pop(){
        if(topInd != -1)
            topInd--;
    }
    bool empty(){
        if(topInd != -1) return false;
        return true;
    }
};

int main(){
    st s;
    string str;
    int n;
    while (cin >> str)
    {
        if (str == "push")
        {
            cin >> n;
            s.push(n);
            cout << "ok" << endl;
        }
        else if (str == "pop")
        {
            if (s.size())
            {
                cout << s.top() << endl;
                s.pop();
            }
            else
            {
                cout << "error" << endl;
            }
        }
        else if (str == "back")
        {
            if (s.size())
            {
                cout << s.top() << endl;
            }
            else
            {
                cout << "error" << endl;
            }
        }
        else if (str == "size")
        {
            cout << s.size() << endl;
        }
        else if (str == "clear")
        {
            while (!s.empty())
                s.pop();
            cout << "ok" << endl;
        }
        else
        {

            cout << "bye" << endl;
            break;
        }
    }
    return 0;
}