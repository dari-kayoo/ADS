#include <iostream>
using namespace std;

struct queue{
    int a[100];
    int topInd;
    queue(){
        topInd = -1;
    }
    void push(int x){
        topInd++;
        a[topInd] = x;
    }
    void pop(){
        for(int i = 0; i < topInd; i++){
            a[i] = a[i+1];
        }
        topInd--;
    }
    int front(){
        if(topInd == -1) return -1;
        return a[0];
    }
    int size(){
        return topInd+1;
    }
    bool empty(){
        if(topInd != -1) return false;
        return true;
    }
};

int main(){
    queue s;
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
                cout << s.front() << endl;
                s.pop();
            }
            else
            {
                cout << "error" << endl;
            }
        }
        else if (str == "front")
        {
            if (s.size())
            {
                cout << s.front() << endl;
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