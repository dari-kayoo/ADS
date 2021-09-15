#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
map<char, char> m;
vector<char> s;
int main()
{
    m = {
        {'(', ')'},
        {'[', ']'},
        {'{', '}'}};

    string str;
    cin >> str;
    int n = str.size();
    bool f = false;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(' or str[i] == '[' or str[i] == '{')
        {
            s.push_back(str[i]);
        }
        if ((str[i] == ')' or str[i] == ']' or str[i] == '}') and (s.size() == 0 or str[i] != m[s[s.size() - 1]]))
        {
            f = true;
            break;
        }
        if (str[i] == ')' or str[i] == ']' or str[i] == '}' and str[i] == m[s[s.size() - 1]])
        {
            s.pop_back();
        }
    }

    if (f == true or s.size() > 0)
    {
        cout << "no";
    }
    else
    {
        cout << "yes";
    }

    return 0;
}