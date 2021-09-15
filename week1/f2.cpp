#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int i = 0;
    cin >> str;
    for (;;)
    {
        i = 0;
        while (str[i] != '\0')
        {

            if (str[i] == '[' && str[i + 1] == ']' ||
                str[i] == '(' && str[i + 1] == ')' ||
                str[i] == '{' && str[i + 1] == '}')
            {
                str.erase(i, 2);
                break;
            }
            i++;
        }
        if (str[i] == '\0')
        {
            if (str.size() == 0)
                cout << "yes";
            else
                cout << "no";

            break;
        }
    }
    return 0;
}