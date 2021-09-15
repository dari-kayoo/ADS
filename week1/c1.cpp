#include <iostream>
#include <string>
#include <deque>
using namespace std;
deque<int> d;
string str;
int n;
int main()
{
    while (cin >> str)
    {
        if (str == "push_back")
        {
            cin >> n;
            d.push_back(n);
            cout << "ok" << endl;
        }
        else if (str == "push_front")
        {
            cin >> n;
            d.push_front(n);
            cout << "ok" << endl;
        }
        else if (str == "pop_back")
        {
            if (d.size())
            {
                cout << d.back() << endl;
                d.pop_back();
            }
            else
            {
                cout << "error" << endl;
            }
        }
        else if (str == "pop_front")
        {
            if (d.size())
            {
                cout << d.front() << endl;
                d.pop_front();
            }
            else
            {
                cout << "error" << endl;
            }
        }
        else if (str == "front")
        {
            if (d.size())
            {
                cout << d.front() << endl;
            }
            else
            {
                cout << "error" << endl;
            }
        }
        else if (str == "back")
        {
            if (d.size())
            {
                cout << d.back() << endl;
            }
            else
            {
                cout << "error" << endl;
            }
        }
        else if (str == "size")
        {
            cout << d.size() << endl;
        }
        else if (str == "clear")
        {
            d.clear();
            cout << "ok" << endl;
        }
        else if (str == "exit")
        {
            cout << "bye" << endl;
            break;
        }
    }
    return 0;
}