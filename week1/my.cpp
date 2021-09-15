#include <iostream>
using namespace std;
struct st
{

    int *a;
    int topIndex;
    st(int n)
    {
        a = new int[n];
        topIndex = -1;
    }
    int top()
    {
        if (topIndex == -1)
            return -1;
        return a[topIndex];
    }
    void push(int x)
    {
        topIndex++;
        a[topIndex] = x;
    }
    void pop()
    {
        if (topIndex != -1)
            topIndex--;
    }
};
int main()
{
    int n = 0, a;
    st s(n);
    while(cin >> a){
        s.push(a);
        n++;
    }
    for(int i = 0; i < n; i++){
        cout << s.top() << " ";
        s.pop();
    }



    return 0;
}