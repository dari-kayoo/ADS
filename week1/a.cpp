#include <iostream>
#include <string>
#include <stack>
using namespace std;
stack<int> s;
string str;
int n;
int main()
{
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