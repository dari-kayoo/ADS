#include <iostream>
#include <string>
#include <queue>
using namespace std;
queue<int> q;
string str;
int n;
int main()
{
    while (cin >> str)
    {
        if (str == "push")
        {
            cin >> n;
            q.push(n);
            cout << "ok" << endl;
        }
        else if (str == "pop")
        {
            if (q.size())
            {
                cout << q.front() << endl;
                q.pop();
            }
            else
            {
                cout << "error" << endl;
            }
        }
        else if (str == "front")
        {
            if (q.size())
            {
                cout << q.front() << endl;
            }
            else
            {
                cout << "error"<< endl;
            }
        }
        else if (str == "size")
        {
            cout << q.size() << endl;
        }
        else if (str == "clear")
        {
            while(!q.empty()){
                q.pop();
            }
            cout << "ok" << endl;
        }
        else if(str == "exit")
        {
            cout << "bye" << endl;
            break;
        }
    }
    return 0;
}