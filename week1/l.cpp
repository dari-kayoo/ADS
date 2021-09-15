#include <iostream>
using namespace std;
int f(int a, int b)
{
    while (a and b)
        if (a >= b)
           a %= b;
        else
           b %= a;
    return a | b;
}
int main()
{
    int n, k;
    cin>>n >> k;
    cout<<(n/f(n, k))*k<<endl;
    return 0;
}