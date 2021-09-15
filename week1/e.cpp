#include <iostream>
#include <deque>
using namespace std;
deque<int> d1, d2;
int f, s;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        cin >> f;
        d1.push_back(f);
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> s;
        d2.push_back(s);
    }
    int n = 0;
    while(!d1.empty() and !d2.empty() and n <=1000000){
        int x = d1.front();
        int y = d2.front();
        d1.pop_front();
        d2.pop_front();

        if ((x == 0 and y == 9) or (x > y and x != 9 and y != 0))
        {
            d1.push_back(x);
            d1.push_back(y);
        }
        else {
            d2.push_back(x);
            d2.push_back(y);
        }
        n++;
    }
    if (d1.empty())
    {
        cout << "second" << " " << n;
    }
    else if (d2.empty())
    {
        cout << "first" << " " << n;
    }
    else
    {
        cout << "botva" << endl;
    }

    return 0;
}