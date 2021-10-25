#include <iostream>
using namespace std;
struct st
{
    int a[100];
    int topInd;
    st()
    {
        topInd = -1;
    }

    int top()
    {
        if (topInd == -1)
            return -1;
        return a[topInd];
    }
    int size()
    {
        return topInd + 1;
    }

    void push(int x)
    {
        topInd++;
        a[topInd] = x;
    }
    int pop()
    {
        return top();
        if (topInd != -1)
            topInd--;

    }
    bool empty()
    {
        if (topInd != -1)
            return false;
        return true;
    }
};
struct deq
{
    st frontstack;
    st endstack;
    void push_front(int x)
    {

        frontstack.push(x);
    }

    int pop_front()
    {
        if (frontstack.empty())
        {
            while (!endstack.empty())
            {
                frontstack.push(endstack.pop());
            }
            return frontstack.pop();
        }
        return frontstack.pop();
    }

    void push_back(int x)
    {

        endstack.push(x);
    }
    int front(){
        return frontstack.top();
    }
    int back(){
        return endstack.top();
    }

    int pop_back()
    {
        if (endstack.empty())
        {
            while (!frontstack.empty())
            {
                endstack.push(frontstack.pop());
            }
            return endstack.pop();
        }
        return endstack.pop();
    }

    int size()
    {
        return frontstack.size() + endstack.size();
    }

    bool empty()
    {
        return (size() == 0) ? true : false;
    }
};
int main()
{
    deq s;
    string str;
    int n;
    while (cin >> str)
    {
        if (str == "push_back")
        {
            cin >> n;
            s.push_back(n);
            cout << "ok" << endl;
        }
        else if (str == "push_front")
        {
            cin >> n;
            s.push_front(n);
            cout << "ok" << endl;
        }
        else if (str == "pop_front")
        {
            if (s.size())
            {
                cout << s.front() << endl;
                s.pop_front();
            }
            else
            {
                cout << "error" << endl;
            }
        }
        else if (str == "pop_back")
        {
            if (s.size())
            {
                cout << s.back() << endl;
                s.pop_back();
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
        else if (str == "back")
        {
            if (s.size())
            {
                cout << s.back() << endl;
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
                s.pop_back();
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
